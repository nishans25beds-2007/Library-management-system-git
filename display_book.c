#include <stdio.h>
#include "library.h"

void displayBooks()
{
    int i;

    if (bookCount == 0)
    {
        printf("No books available!\n");
        return;
    }

    printf("\n----- BOOK DETAILS -----\n");

    for (i = 0; i < bookCount; i++)
    {
        printf("\nBook ID: %d", books[i].id);
        printf("\nBook Name: %s", books[i].name);
        printf("\nAuthor: %s", books[i].author);

        if (books[i].isIssued == 1)
            printf("\nStatus: Issued\n");
        else
            printf("\nStatus: Available\n");
    }
}
