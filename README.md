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
5. View Today
6. View by Date
7. Search Event
8. Send Reminders
9. View Statistics
10. Undo Last Operation
11. Exit
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
 ### ADMIN ACCESS CHECK
<img width="280" height="48" alt="image" src="https://github.com/user-attachments/assets/05e7168f-81d0-42c8-b430-fa7efb7ee74a" />

---

### 🟢 Add Event  
<img width="380" height="465" alt="image" src="https://github.com/user-attachments/assets/0958fcb3-83c8-46cd-aac5-03895cbb9707" />
 
---

### ❌ Delete Event  
<img width="256" height="62" alt="image" src="https://github.com/user-attachments/assets/cfcb9a43-448a-4a65-b457-ad835924efca" />
<img width="645" height="110" alt="image" src="https://github.com/user-attachments/assets/a0b4b481-1b3c-4f87-9bd5-d7444ece6499" />
  
---

### 📋 View All Events  
<img width="749" height="127" alt="image" src="https://github.com/user-attachments/assets/860022ab-7778-428c-8edd-77ac855ad3ed" />
  
---

### 📅 View Today’s Events  
<img width="634" height="88" alt="image" src="https://github.com/user-attachments/assets/1e6e11ab-0c72-4fd9-aeb9-51887f212283" />


---

### 📆 View Events by Date  
<img width="642" height="107" alt="image" src="https://github.com/user-attachments/assets/26991f4d-216c-4514-b013-dd7430401ff7" />
 

---

### 🔍 Search Event (by Name/Type)  
<img width="629" height="86" alt="image" src="https://github.com/user-attachments/assets/281f222b-3a2a-485e-9d18-b5c36bb77d50" />
 

---

### 📊 View Statistics  
<img width="356" height="197" alt="image" src="https://github.com/user-attachments/assets/99940c50-e036-47a2-b757-1548643e6c1b" />

---

### ↩️ Undo Last Operation  
<img width="645" height="110" alt="image" src="https://github.com/user-attachments/assets/a0b4b481-1b3c-4f87-9bd5-d7444ece6499" />
<img width="331" height="42" alt="image" src="https://github.com/user-attachments/assets/a5299e26-1fdd-4cda-a864-87e1b97ab89f" />
<img width="747" height="124" alt="image" src="https://github.com/user-attachments/assets/6fa9ff56-ab1b-4432-8cb9-ee067a083da7" />


---

### 🚪 Exit Program  
<img width="531" height="86" alt="image" src="https://github.com/user-attachments/assets/8856abd8-7e76-4921-92cd-e3e32d9ca51c" />



----------------------------------------------------------------------------------------------------------------
## 📜 License  

This project is licensed under the terms of the **MIT License**.  

You can view the full license text in the [LICENSE](./LICENSE) file.  
