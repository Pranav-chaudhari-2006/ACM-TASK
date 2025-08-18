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

===============================

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
## 📸 Demo Screenshots  

| **Add Event** | **Delete Event** |  
|---------------|------------------|  
|[Screenshot 2025-08-18 173412.png](https://github.com/Pranav-chaudhari-2006/ACM-TASK/blob/75372f70ceacdf544abf06b8f3848686b5987536/Screenshot%202025-08-18%20173412.png)| <img width="267" height="65" alt="Screenshot 2025-08-18 061614" src="https://github.com/user-attachments/assets/9daa0643-7aa1-4bb0-9517-a4652e7235b9" />|  

| **View All Events** | **View Today’s Events** |  
|----------------------|-------------------------|  
| <img width="781" height="112" alt="Screenshot 2025-08-18 060844" src="https://github.com/user-attachments/assets/932b1d77-cdb6-44e1-b46b-ff9fb8d04d09" />| <img width="630" height="84" alt="Screenshot 2025-08-18 060901" src="https://github.com/user-attachments/assets/01bd87bb-acdf-4ab4-a294-709d3ee1a394" />|  

| **View Events by Date** | **Search Event (by Name/Type)** |  
|--------------------------|--------------------------------|  
|<img width="621" height="106" alt="Screenshot 2025-08-18 060930" src="https://github.com/user-attachments/assets/17d23b8d-fe36-490a-900c-a67812f94b39" />|<img width="630" height="90" alt="Screenshot 2025-08-18 060951" src="https://github.com/user-attachments/assets/029dfba4-e448-4d11-8874-4b92b41b0914" />|

| **View Statistics** | **Undo Last Operation** |  
|----------------------|--------------------------|  
| <img width="380" height="173" alt="Screenshot 2025-08-18 061508" src="https://github.com/user-attachments/assets/cc93e9e4-e1a9-4d06-b96f-801b2347ec3a" />|<img width="332" height="46" alt="Screenshot 2025-08-18 061643" src="https://github.com/user-attachments/assets/9fc66b45-9ab5-4701-9805-25b9cd3459e7" />|  

| **Exit Program** |  
|------------------|  
|<img width="534" height="91" alt="Screenshot 2025-08-18 061722" src="https://github.com/user-attachments/assets/acb21409-f6c6-40ae-a254-0304bbd88ffc" />|  


===============================

## 📜 License  

This project is licensed under the terms of the **MIT License**.  

You can view the full license text in the [LICENSE](./LICENSE) file.  
