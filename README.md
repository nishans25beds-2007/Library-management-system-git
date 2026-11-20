LIBRARY MANAGEMENT SYSYTEM


1. Project introduction
A Library Management System is a computer-based application used to manage the activities of a library.
In a normal library, maintaining book records manually can be difficult. Finding a book, checking its availability and managing issued books takes time.
Our project solves this problem using the C programming language.

Main objectives:
1.	Store book details.
2.	Display all available books.
3.	Search for a particular book.
4.	Issue books to students.
5.	Return issued books.
6.	Track whether a book is available or issued.

What is the purpose of each file?
File	Purpose
main.c     	Main menu and program execution
library.h	Structure and function declarations
add_book.c	Adding books
display_book.c	Displaying books
search_book.c	Searching books
issue_book.c	Issuing and returning books
README.md	Project explanation


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
