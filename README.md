# Smart Event Manager (C++)

A C++ Command Line Event Scheduler that allows users to add, edit, delete, and view events with features like admin authentication, undo last operation, and reminder alerts. Implements OOP, file handling, and stack-based undo for a modular and practical solution.

-----------------------------------------------------------------------------------------------------------------------------
## ✨ Features Implemented
- ✅ **Add Events** – Create new events with title, date, and time.  
- 📝 **Edit Events** – Update existing events easily.  
- ❌ **Delete Events** – Remove events you no longer need.  
- 📋 **View All Events** – Display a clean list of scheduled events.  
- 🔐 **Admin Authentication** – Secure access with login system.  
- ⏪ **Undo Last Operation** – Quickly reverse accidental actions.  
- ⏰ **Reminder Alerts** – Get notified of upcoming events.  
- 🗂️ **File Handling** – Events are saved and loaded automatically.  
- 🧩 **Modular & OOP Design** – Clean, structured, and extendable C++ code.  

-----------------------------------------------------------------------------------------------------------------------------
## 🖥️ Sample CLI Usage  
When you run the program, the main menu looks like this:  

```text
===== Smart Event Manager =====
1. Add Event
2. Edit Event
3. Delete Event
4. View All Events
5. Undo Last Operation
6. Exit
===============================
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

-----------------------------------------------------------------------------------------------------------------------------
## 🚀 How to Run the Project
1. Clone the repository:
   ```bash
   git clone https://github.com/Pranav-chaudhari-2006/ACM-TASK.git
   cd ACM-TASK
2. Compile the program:
   g++ smart_event_manager.cpp -o smart_event_manager
3. Run the program:
   ./smart_event_manager

-----------------------------------------------------------------------------------------------------------------------------
## 📸 Demo Screenshots  

Below are sample screenshots for different operations of the **Smart Event Manager**:  

---
 
### 🟢 Add Event  
<img src="https://github.com/user-attachments/assets/406dadea-792b-4c07-b076-8461cff2c666" width="350">  

---

### ❌ Delete Event  
<img src="https://github.com/user-attachments/assets/9516ed1a-6cdd-4a32-8765-2bbccfbac42c" width="300">  
<img src="https://github.com/user-attachments/assets/ec4612b6-33f4-46ce-9016-3b9243bbefc3" width="600">  

---

### 📋 View All Events  
<img src="https://github.com/user-attachments/assets/2f4256d2-c5ef-4fc2-8180-fcdf2bdb95ba" width="750">  

---

### 📅 View Today’s Events  
<img src="https://github.com/user-attachments/assets/bb147799-1efc-4bf5-97ae-d5c43b1b46de" width="630">  

---

### 📆 View Events by Date  
<img src="https://github.com/user-attachments/assets/fc2a9989-21e7-4231-8070-f07d1c9ad675" width="620">  

---

### 🔍 Search Event (by Name/Type)  
<img src="https://github.com/user-attachments/assets/ec213518-77a2-4384-9322-3a130392b2f2" width="630">  

---

### 📊 View Statistics  
<img src="https://github.com/user-attachments/assets/b9feb8fb-4416-4e51-ac08-176fbea84b07" width="380">  

---

### ↩️ Undo Last Operation  
<img src="https://github.com/user-attachments/assets/ec4612b6-33f4-46ce-9016-3b9243bbefc3" width="600">  
<img src="https://github.com/user-attachments/assets/a32c80b7-9bdf-4592-bbc0-cb70b28a3724" width="330">  
<img src="https://github.com/user-attachments/assets/49f125e8-d267-4e36-b70a-0bf37e410a12" width="730">  

---

### 🚪 Exit Program  
<img src="https://github.com/user-attachments/assets/48a21917-7fde-474a-83fc-ab5f652532a6" width="530">  


----------------------------------------------------------------------------------------------------------------
## 📜 License  

This project is licensed under the terms of the **MIT License**.  

You can view the full license text in the [LICENSE](./LICENSE) file.  
