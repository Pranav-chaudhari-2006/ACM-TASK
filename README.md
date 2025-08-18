# 🍉 Smart Event Manager (C++)

![C++](https://img.shields.io/badge/language-C++-blue.svg)
![Platform](https://img.shields.io/badge/platform-CLI-lightgrey.svg)
![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)

---

## 📖 Overview  
Smart Event Manager is a lightweight **Command-Line Application in C++** to manage personal and professional events.  

It provides:  
- Quick scheduling (Add, Edit, Delete)  
- Reminders & Alerts  
- Admin Authentication  
- Undo for accidental actions  

Designed with **OOP principles** and **file handling** for reliability and scalability.  

---

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

---

## 🖥 Sample CLI Usage  

When you run the program, the main menu looks like this:  

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
Add Event
> Enter choice: 1  
Title: Meeting  
Date: 2025-08-20  
Time: 10:00 AM  
✅ Event added successfully!

Edit Event
> Enter choice: 2  
Enter Event ID: 1  
New Title: Client Call  
New Date: 2025-08-21  
New Time: 11:30 AM  
✅ Event updated successfully!

Delete Event
> Enter choice: 3  
Enter Event ID: 1  
❌ Event deleted successfully!

View Events
> Enter choice: 4  
ID | Title        | Date       | Time  
---------------------------------------  
1  | Meeting      | 2025-08-20 | 10:00 AM  
2  | Doctor Visit | 2025-08-22 | 05:30 PM  

Undo last
> Enter choice: 5  
↩️ Last action undone successfully!

---


## 🚀 How to Run the Project
1. Clone the repository:
   ```bash
   git clone https://github.com/Pranav-chaudhari-2006/ACM-TASK.git
   cd ACM-TASK
2. Compile the program:
   g++ smart_event_manager.cpp -o smart_event_manager
3. Run the program:
   ./smart_event_manager

===============================
## 📸 Preview


===============================

## 📜 License  

This project is licensed under the terms of the **MIT License**.  

You can view the full license text in the [LICENSE](./LICENSE) file.  
