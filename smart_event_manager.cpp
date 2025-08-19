#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>   //string stream
#include <algorithm> //For usage of remove_if and lambda function
#include <ctime>     //To use date and Time function
#include <regex>     //To validate Format
#include <iomanip>   //Formatting the style and way of printing(setw and left)
#include <cctype>    //toupper and tolower
#include <stack>     //For undo operation
#include <map>
using namespace std;

// --------------------Event Class -----------------------------
class Event
{
private:
    string id, name, type, location, date, time;

public:
    Event() {}
    Event(string id, string name, string type, string date, string time, string location = "")
        : id(id), name(name), type(type), date(date), time(time), location(location) {}

    string getID() const { return id; }
    string getName() const { return name; }
    string getType() const { return type; }
    string getDate() const { return date; }
    string getTime() const { return time; }
    string getLocation() const { return location; }

    void setName(string n) { name = n; }
    void setType(string t) { type = t; }
    void setDate(string d) { date = d; }
    void setTime(string ti) { time = ti; }
    void setLocation(string l) { location = l; }

    void display() const
    {
        cout << left << setw(5) << id // For aligning to the left side
             << setw(20) << name      // Used for right aligning the column(text)
             << setw(15) << type
             << setw(12) << date
             << setw(8) << time
             << setw(20) << location << endl;
    }

    string serialize() const // Used to convert the string into CS text to store in csv file
    {
        return id + "," + name + "," + type + "," + date + "," + time + "," + location;
    }

    static Event deserialize(const string &line) // Parses(divide in meaningful parts) the stringstream into different fields
    {
        stringstream ss(line);
        string id, name, type, date, time, location;
        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, type, ',');
        getline(ss, date, ',');
        getline(ss, time, ',');
        getline(ss, location, ',');
        return Event(id, name, type, date, time, location);
    }
};

// ----------------------------Event Manager ------------------------------
class EventManager
{
private:
    vector<Event> events;
    const string filename = "events.csv"; // Operational File

    stack<vector<Event>> history; //  for Undo

    // Check if a new/edited event conflicts by date+time
    bool isConflict(const Event &newEvent)
    {
        for (auto &e : events)
        {
            if (e.getDate() == newEvent.getDate() && e.getTime() == newEvent.getTime())
            {
                cout << "Conflict: Event '" << e.getName() << "' already scheduled at this time!\n";
                suggestTimeSlots(newEvent.getDate());
                return true;
            }
        }
        return false;
    }

    // Offer simple hourly free slots
    void suggestTimeSlots(const string &date)
    {
        cout << "Suggested available slots (HH:MM):\n";
        vector<string> slots = {"09:00", "10:00", "11:00", "12:00", "13:00", "14:00", "15:00", "16:00", "17:00"};
        for (auto &slot : slots)
        {
            bool freeSlot = true;
            for (auto &e : events)
                if (e.getDate() == date && e.getTime() == slot)
                    freeSlot = false;
            if (freeSlot)
                cout << slot << " ";
        }
        cout << endl;
    }

    // DD-MM-YYYY
    bool validateDate(const string &date)
    {
        regex pattern("\\d{2}-\\d{2}-\\d{4}");
        return regex_match(date, pattern);
    }

    // HH:MM 24-hr
    bool validateTime(const string &time)
    {
        regex pattern("([01]\\d|2[0-3]):[0-5]\\d");
        return regex_match(time, pattern);
    }

    // Prevent duplicate ID, or exact same Name+Date+Time
    bool isDuplicate(const Event &newEvent)
    {
        for (auto &e : events)
        {
            if (e.getID() == newEvent.getID())
            {
                cout << "Duplicate: Event with this ID already exists!\n";
                return true;
            }
            if (e.getName() == newEvent.getName() &&
                e.getDate() == newEvent.getDate() &&
                e.getTime() == newEvent.getTime())
            {
                cout << "Duplicate: Event with same Name, Date, and Time already exists!\n";
                return true;
            }
        }
        return false;
    }

    // Save current vector snapshot before a mutating operation (for undo)
    void saveState()
    {
        history.push(events);
    }

public:
    EventManager() { loadFromFile(); }

    // Add an event (with minimal input validation)
    void addEvent(const Event &e)
    {
        if (!validateDate(e.getDate()) || !validateTime(e.getTime()))
        {
            cout << "Invalid date/time format!\n";
            return;
        }
        if (isDuplicate(e))
            return;
        if (!isConflict(e))
        {
            saveState();
            events.push_back(e);
            saveToFile();
            cout << "Event added successfully.\n";
        }
    }

    // Edit by ID
    void editEvent(string id)
    {
        for (auto &e : events)
        {
            if (e.getID() == id)
            {
                string n, t, d, ti, l;
                cout << "Enter new name: ";
                getline(cin, n);
                cout << "Enter new type: ";
                getline(cin, t);
                cout << "Enter new date (DD-MM-YYYY): ";
                getline(cin, d);
                cout << "Enter new time (HH:MM): ";
                getline(cin, ti);
                cout << "Enter new location: ";
                getline(cin, l);
                if (!validateDate(d) || !validateTime(ti))
                {
                    cout << "Invalid date/time format!\n";
                    return;
                }
                Event temp(e.getID(), n, t, d, ti, l);
                if (!isConflict(temp))
                {
                    saveState(); // ✅
                    e.setName(n);
                    e.setType(t);
                    e.setDate(d);
                    e.setTime(ti);
                    e.setLocation(l);
                    saveToFile();
                    cout << "Event updated successfully.\n";
                }
                return;
            }
        }
        cout << "Event not found.\n";
    }

    // Delete by ID
    void deleteEvent(string id)
    {
        auto it = remove_if(events.begin(), events.end(), [&](Event &e)
                            { return e.getID() == id; });
        if (it != events.end())
        {
            saveState();
            events.erase(it, events.end());
            saveToFile();
            cout << "Event deleted.\n";
        }
        else
            cout << "Event not found.\n";
    }

    // Show all events
    void viewAllEvents() const
    {
        if (events.empty())
        {
            cout << "No events scheduled.\n";
            return;
        }
        cout << left << setw(5) << "ID" << setw(20) << "Name" << setw(15) << "Type"
             << setw(12) << "Date" << setw(8) << "Time" << setw(20) << "Location" << endl;
        for (const auto &e : events)
            e.display();
    }

    // Show by specific date
    void viewEventsByDate(const string &date) const
    {
        bool found = false;
        cout << "Events on " << date << ":\n";
        cout << left << setw(5) << "ID" << setw(20) << "Name" << setw(15) << "Type"
             << setw(12) << "Date" << setw(8) << "Time" << setw(20) << "Location" << endl;
        for (const auto &e : events)
        {
            if (e.getDate() == date)
            {
                e.display();
                found = true;
            }
        }
        if (!found)
            cout << "No events found.\n";
    }

    // Compute today in DD-MM-YYYY, then reuse viewEventsByDate
    void viewTodayEvents() const
    {
        time_t now = time(0);                  // time(0) returns the current time in seconds
        tm *ltm = localtime(&now);             // Converting the time to localtime(ltm:stores valid format of dd-mm-yyyy)
        char buffer[11];                       // buffer holds today's date as a string
        strftime(buffer, 11, "%d-%m-%Y", ltm); // Format the tm struct into string
        viewEventsByDate(buffer);
    }

    void searchEvent(string keyword) const
    {
        /*tranform(start of tranformation , End of transformation , Where to store , what operation to be done)*/

        transform(keyword.begin(), keyword.end(), keyword.begin(), ::tolower);
        bool found = false;
        for (const auto &e : events)
        {
            string name = e.getName();
            string type = e.getType();
            transform(name.begin(), name.end(), name.begin(), ::tolower);
            transform(type.begin(), type.end(), type.begin(), ::tolower);
            if (name.find(keyword) != string::npos || type.find(keyword) != string::npos) // Npos is marker meaning not found
            {
                if (!found)
                {
                    cout << left << setw(5) << "ID" << setw(20) << "Name" << setw(15) << "Type"
                         << setw(12) << "Date" << setw(8) << "Time" << setw(20) << "Location" << endl;
                }
                e.display();
                found = true;
            }
        }
        if (!found)
            cout << "No matching events found.\n";
    }

    void sendReminders(const string &attendeesFile) const
    {
        ifstream file(attendeesFile);
        if (!file)
        {
            cout << "Attendees file not found.\n";
            return;
        }
        string email;
        while (getline(file, email))
        {
            cout << "Reminder sent to: " << email << endl;
        }
    }

    // Simple counts by type + upcoming (string compare on DD-MM-YYYY)
    void viewStatistics() const
    {
        cout << "===== Event Statistics =====\n";
        cout << "Total Events: " << events.size() << "\n";

        map<string, int> typeCount;
        for (auto &e : events)
            typeCount[e.getType()]++;

        cout << "Events by Type:\n";
        for (auto &p : typeCount)
            cout << "  " << p.first << ": " << p.second << "\n";

        time_t now = time(0);
        tm *ltm = localtime(&now);
        char buffer[11];
        strftime(buffer, 11, "%d-%m-%Y", ltm);

        int upcoming = 0;
        for (auto &e : events)
            if (e.getDate() >= string(buffer))
                upcoming++;

        cout << "Upcoming Events (including today): " << upcoming << "\n";
    }

    void undoLastOperation()
    {
        if (history.empty())
        {
            cout << "No operation to undo.\n";
            return;
        }
        events = history.top();
        history.pop();
        saveToFile();
        cout << "Last operation undone successfully.\n";
    }

    // Persist to CSV
    void saveToFile()
    {
        ofstream out(filename);
        for (auto &e : events)
            out << e.serialize() << endl;
    }

    // Load from CSV
    void loadFromFile()
    {
        events.clear();
        ifstream in(filename);
        string line;
        while (getline(in, line))
            if (!line.empty())
                events.push_back(Event::deserialize(line));
    }
};

void clearScreen() // To clear the terminal or console before every task(To keep the terminal readable)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    EventManager manager;
    string role;
    cout << "Enter role (Admin/User): ";
    getline(cin, role);
    transform(role.begin(), role.end(), role.begin(), ::tolower);

    bool isAdmin = false;
    if (role == "admin")
    {
        string pass;
        cout << "Enter admin passcode: ";
        getline(cin, pass);
        if (pass == "1234")
            isAdmin = true;
        else
        {
            cout << "Wrong passcode! Switching to User mode.\n";
        }
    }

    int choice;
    do
    {
        clearScreen();
        cout << "===== Smart Event Manager =====\n";
        if (isAdmin)
        {
            cout << "1. Add Event\n2. Edit Event\n3. Delete Event\n4. View All Events\n5. View Today\n6. View by Date\n7. Search Event\n8. Send Reminders\n9. View Statistics\n10. Undo Last Operation\n11. Exit\n";
        }
        else
        {
            cout << "1. View All Events\n2. View Today\n3. View by Date\n4. Search Event\n5. Exit\n";
        }
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (isAdmin)
        {
            switch (choice)
            {
            case 1:
            {
                string id, name, type, date, time, location;
                cout << "Enter ID: ";
                getline(cin, id);
                cout << "Enter Name: ";
                getline(cin, name);
                cout << "Enter Type: ";
                getline(cin, type);
                cout << "Enter Date (DD-MM-YYYY): ";
                getline(cin, date);
                cout << "Enter Time (HH:MM): ";
                getline(cin, time);
                cout << "Enter Location: ";
                getline(cin, location);
                manager.addEvent(Event(id, name, type, date, time, location));
                break;
            }
            case 2:
            {
                string id;
                cout << "Enter Event ID to edit: ";
                getline(cin, id);
                manager.editEvent(id);
                break;
            }
            case 3:
            {
                string id;
                cout << "Enter Event ID to delete: ";
                getline(cin, id);
                manager.deleteEvent(id);
                break;
            }
            case 4:
                manager.viewAllEvents();
                break;
            case 5:
                manager.viewTodayEvents();
                break;
            case 6:
            {
                string date;
                cout << "Enter date (DD-MM-YYYY): ";
                getline(cin, date);
                manager.viewEventsByDate(date);
                break;
            }
            case 7:
            {
                string keyword;
                cout << "Enter keyword (name/type): ";
                getline(cin, keyword);
                manager.searchEvent(keyword);
                break;
            }
            case 8:
            {
                string file;
                cout << "Enter attendee CSV file path: ";
                getline(cin, file);
                manager.sendReminders(file);
                break;
            }
            case 9:
                manager.viewStatistics();
                break;
            case 10:
                manager.undoLastOperation();
                break;
            case 11:
                break;
            default:
                cout << "Invalid choice.\n";
            }
        }
        else
        { // User menu
            switch (choice)
            {
            case 1:
                manager.viewAllEvents();
                break;
            case 2:
                manager.viewTodayEvents();
                break;
            case 3:
            {
                string date;
                cout << "Enter date (DD-MM-YYYY): ";
                getline(cin, date);
                manager.viewEventsByDate(date);
                break;
            }
            case 4:
            {
                string keyword;
                cout << "Enter keyword (name/type): ";
                getline(cin, keyword);
                manager.searchEvent(keyword);
                break;
            }
            case 5:
                break;
            default:
                cout << "Invalid choice.\n";
            }
        }
        cout << "Press Enter to continue...";
        cin.get();
    } while ((isAdmin && choice != 11) || (!isAdmin && choice != 5));

    cout << "Exiting Smart Event Manager.\n";
    cout << "Thank you for using Smart Event Manager. Goodbye!\n";
    return 0;
}

