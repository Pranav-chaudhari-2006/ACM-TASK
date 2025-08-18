# 🍉 Smart Event Manager (C++)

![C++](https://img.shields.io/badge/language-C++-blue.svg)
![Platform](https://img.shields.io/badge/platform-CLI-lightgrey.svg)
![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)

--------------------------------------------------------------------------------------------------------------------------------

## 📖 Overview  

**Smart Event Manager** is a simple and efficient **C++ command-line application** to help you organize both personal and professional events.  

With this tool, you can:  
- 📅 **Quickly schedule events** – add, edit, or delete in seconds  
- ⏰ **Set reminders and alerts** so you never miss important tasks  
- 🔑 **Secure admin access** to protect your events  
- ↩️ **Undo accidental actions** easily  

Built using **Object-Oriented Programming (OOP)** and **file handling**, it’s reliable, scalable, and easy to maintain.

--------------------------------------------------------------------------------------------------------------------------------

## 👨‍💻 Author

**Pranav Chaudhari** – 2nd Year, PCCOE  
Email: pranavchaudhari2006@gmail.com
GitHub: [https://github.com/Pranav-chaudhari-2006](https://github.com/Pranav-chaudhari-2006)

--------------------------------------------------------------------------------------------------------------------------------

## 🛠 Tech Stack

- C++ (OOP & STL)  
- File Handling (CSV storage)  
- Standard C++ Libraries: iostream, fstream, vector, stack, map  

--------------------------------------------------------------------------------------------------------------------------------

## ✨ Features Implemented  

- ✅ **Add Events** – Create new events with title, date, and time.  
- ✏️ **Edit Events** – Update existing events easily.  
- ❌ **Delete Events** – Remove events you no longer need.  
- 📋 **View All Events** – Display a clean list of scheduled events.  
- 🔒 **Admin Authentication** – Secure access with login system.  
- ↩️ **Undo Last Operation** – Quickly reverse accidental actions.  
- ⏰ **Reminder Alerts** – Get notified of upcoming events.  
- 📂 **File Handling** – Events are saved and loaded automatically.  
- 🛠 **Modular & OOP Design** – Clean, structured, and extendable C++ code.  

--------------------------------------------------------------------------------------------------------------------------------

## 🚀 How to Run the Project
1. Clone the repository:
   ```bash
   git clone https://github.com/Pranav-chaudhari-2006/ACM-TASK.git
   cd ACM-TASK
2. Compile the program:
   g++ smart_event_manager.cpp -o smart_event_manager
3. Run the program:
   ./smart_event_manager

--------------------------------------------------------------------------------------------------------------------------------
## 📜 License  

This project is licensed under the terms of the **MIT License**.  

You can view the full license text in the [LICENSE](./LICENSE) file.  
--------------------------------------------------------------------------------------------------------------------------------

## 🖼️ Screenshots

| Feature | Screenshot |
|---------|------------|
| 🔑 Admin Access | ![Admin Access](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/dcd2898a121704fb1c2c75dbb6860be4eb1a32b3/Screenshot%202025-08-18%20173314.png) |
| 📋 Main Menu | ![Menu](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/a714a7db48091f6ac40f9d276023ab8ab3516aec/Screenshot%202025-08-18%20173324.png) |
| ➕ Add Event | ![Add Event](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/59e861e9bb3ce634e324d5bc40a67d4f971edafa/Screenshot%202025-08-18%20173412.png) |
| ✏️ Edit Event | ![Edit Event](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/a714a7db48091f6ac40f9d276023ab8ab3516aec/Screenshot%202025-08-18%20173528.png) |
| 🗑️ Delete Event | ![Delete Event](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/a714a7db48091f6ac40f9d276023ab8ab3516aec/Screenshot%202025-08-18%20173622.png) |
| 📜 View All Events | ![View All Events](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/a714a7db48091f6ac40f9d276023ab8ab3516aec/Screenshot%202025-08-18%20173542.png) |
| 📅 View Today’s Events | ![View Today Events](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/a714a7db48091f6ac40f9d276023ab8ab3516aec/Screenshot%202025-08-18%20173552.png) |
| 🗓️ View By Date | ![View By Date](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/a714a7db48091f6ac40f9d276023ab8ab3516aec/Screenshot%202025-08-18%20173642.png) |
| 🔍 Search Event | ![Search Event](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/a714a7db48091f6ac40f9d276023ab8ab3516aec/Screenshot%202025-08-18%20173659.png) |
| 📊 View Stats | ![View Stats](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/a714a7db48091f6ac40f9d276023ab8ab3516aec/Screenshot%202025-08-18%20173721.png) |
| ↩️ Undo Last Operation(Advanced Feature)| ![Undo last Operation](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/a714a7db48091f6ac40f9d276023ab8ab3516aec/Screenshot%202025-08-18%20173734.png) |
| ❌ Exit Application | ![Exit](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/a714a7db48091f6ac40f9d276023ab8ab3516aec/Screenshot%202025-08-18%20173743.png) |

---------------------------------------------------------------------------------------------------------------------------------
## 🖥 Sample CLI Usage  

When you run the program, the main menu will appear like this:  

### Admin Menu
```text
===== Smart Event Manager =====
1. Add Event
2. Edit Event
3. Delete Event
4. View All Events
5. View Today
6. View by Date
7. Search Event
8. Send Reminders
9. View Statistics
10. Undo Last Operation
11. Exit
==============================
Enter your choice: _
➕ Add Event
Enter ID: 1
Enter Name: Meeting
Enter Type: Work
Enter Date (DD-MM-YYYY): 20-08-2025
Enter Time (HH:MM): 10:00
Enter Location: Office
✅ Event added successfully!

✏️ Edit Event
Enter Event ID to edit: 1
Enter new name: Client Call
Enter new type: Work
Enter new date (DD-MM-YYYY): 21-08-2025
Enter new time (HH:MM): 11:30
Enter new location: Conference Room
✅ Event updated successfully!

🗑️ Delete Event
Enter Event ID to delete: 1
❌ Event deleted successfully!

📜 View All Events
ID | Name         | Type  | Date       | Time   | Location
----------------------------------------------------------
1  | Meeting      | Work  | 20-08-2025 | 10:00  | Office
2  | Doctor Visit | Personal | 22-08-2025 | 17:30 | Clinic

📅 View Today’s Events
Events on 18-08-2025:
ID | Name   | Type  | Date       | Time   | Location
-----------------------------------------------
No events found.

🔍 Search Event
Enter keyword (name/type): meeting
ID | Name   | Type | Date       | Time   | Location
-----------------------------------------------
1  | Meeting | Work | 20-08-2025 | 10:00 | Office

↩️ Undo Last Operation
Last action undone successfully!

❌ Exit Application
Exiting Smart Event Manager.
Thank you for using Smart Event Manager. Goodbye!

