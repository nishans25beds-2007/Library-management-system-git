# Library-management-system
A library management student system using C programming and Git

1. Objective of the project
The main objective is to develop a simple Library Management System that helps manage book records.

The system allows users to:
1. Add new books.
2. Display all available books.
3. Search for books using Book ID.
4. Issue books to students.
5. Return issued books.
2. Technologies used
Technology	Purpose
C Programming	Developing the application
Windows PowerShell	Creating files and executing commands
Git	Tracking changes and managing versions
GitHub	Hosting and sharing the project online
GCC Compiler	Compiling and running the C program

3. Project file structure
We created four files inside the project folder.
LibraryManagementSystem

main.c

Contains the main function, menu and switch-case statements.
library.c

Contains the implementation of add, display, search, issue and return functions.
library.h

Contains the Book structure, MAX_BOOKS definition and function declarations.
README.md

Contains project description, features, technologies and compilation instructions.


4. Explanation of the program
A. main.c – Main program
This file controls the entire application.

We implemented a menu-driven program using:
- do-while loop to display the menu repeatedly.
- switch-case to select different operations.
- Function calls to execute the selected operation.
