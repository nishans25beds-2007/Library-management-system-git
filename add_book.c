#include <stdio.h>
#include "library.h"

void addBook()
{
    if (bookCount >= MAX_BOOKS)
    {
        printf("Library is full!\n");
        return;
    }

    int id, i;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (i = 0; i < bookCount; i++)
    {
        if (books[i].id == id)
        {
            printf("Book ID already exists!\n");
            return;
        }
    }

    books[bookCount].id = id;

    printf("Enter Book Name: ");
    scanf(" %49[^\n]", books[bookCount].name);

    printf("Enter Author Name: ");
    scanf(" %49[^\n]", books[bookCount].author);

    books[bookCount].isIssued = 0;
    books[bookCount].issuedTo[0] = '\0';

    bookCount++;

    printf("\nBook added successfully!\n");
}
