#include <stdio.h>
#include "library.h"

void searchBook()
{
    int id, i, found = 0;

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < bookCount; i++)
    {
        if (books[i].id == id)
        {
            printf("\nBook Found!\n");
            printf("Book ID: %d\n", books[i].id);
            printf("Book Name: %s\n", books[i].name);
            printf("Author: %s\n", books[i].author);

            if (books[i].isIssued == 1)
                printf("Status: Issued\n");
            else
                printf("Status: Available\n");

            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Book not found!\n");
}
