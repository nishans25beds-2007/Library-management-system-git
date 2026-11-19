
#ifndef LIBRARY_H
#define LIBRARY_H

#define MAX_BOOKS 100

struct Book
{
    int id;
    char name[50];
    char author[50];
    int isIssued;
    char issuedTo[50];
};

typedef struct Book Book;

extern Book books[MAX_BOOKS];
extern int bookCount;

void addBook();
void displayBooks();
void searchBook();
void issueBook();

#endif
