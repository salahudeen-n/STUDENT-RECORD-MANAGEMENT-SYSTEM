# Student Record Management System in C

## 📌 Project Description

The **Student Record Management System** is a menu-driven application developed using the C programming language to manage student information efficiently.

This project uses a **Singly Linked List (SLL)** for dynamic memory allocation and data management. It allows users to add, delete, modify, display, and sort student records. It also uses file handling to store student information permanently and retrieve the records whenever the application is restarted.

## 🚀 Features

- **Add Student:** Add new student records with automatically generated roll numbers.
- **Delete Student:** Delete student records using roll number or student name.
- **Modify Student:** Update student details by searching using roll number, name, or percentage.
- **Display Records:** View all available student records.
- **Sort Records:** Sort student details alphabetically by name or by percentage.
- **Reverse Records:** Reverse the linked list.
- **Delete All Records:** Remove all student records at once.
- **File Handling:** Save student details into a file (`student.dat`) and retrieve them when the application starts.
- **Data Validation:** Validate student percentage within the range of 0 to 100.

## 🛠️ Technologies Used

- Programming Language: C
- Data Structure: Singly Linked List
- Memory Management: Dynamic Memory Allocation (`malloc`, `free`)
- File Handling: `fopen()`, `fscanf()`, `fprintf()`, `fclose()`
- String Handling: `strcmp()`, `strcpy()`
- Build Tool: Makefile
- Compiler: GCC

## 📂 Project Structure

```text
Student_Record_Management/
│
├── header.h
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_mod.c
├── stud_show.c
├── stud_save.c
├── Makefile
└── student.dat
```

## ⚙️ How to Compile and Run

**1. Clone the repository**

```bash
git clone <your-repository-link>
```

**2. Navigate to the project directory**

```bash
cd Student_Record_Management
```

**3. Compile the project**

```bash
make
```

**4. Run the application**

```bash
./a.out
```

## 📋 Available Operations

| Option | Operation |
|---|---|
| A | Add Student |
| D | Delete Student |
| S | Show Student Records |
| M | Modify Student |
| V | Save Student Records |
| T | Sort Student Records |
| L | Delete All Records |
| R | Reverse Linked List |
| E | Exit |

## 🎯 Learning Outcomes

Through this project, I gained practical experience in:

- Implementing Singly Linked Lists.
- Understanding pointers and pointer-to-pointer concepts.
- Dynamic memory allocation and deallocation.
- Working with structures in C.
- File handling for permanent data storage.
- Implementing searching, sorting, insertion, and deletion operations.
- Developing a menu-driven application using modular programming.

## 👨‍💻 Author

**Salahudeen N**

Electronics and Communication Engineering Graduate

---

*This project was developed as part of my C Programming and Embedded Systems learning journey.*
