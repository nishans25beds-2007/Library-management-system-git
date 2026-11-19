#include <stdio.h>
#include "library.h"

void issueBook()
{
    int id, i, choice;

    printf("\n1. Issue Book");
    printf("\n2. Return Book");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (i = 0; i < bookCount; i++)
    {
        if (books[i].id == id)
        {
            if (choice == 1)
            {
                if (books[i].isIssued == 1)
                {
                    printf("Book is already issued!\n");
                }
                else
                {
                    printf("Enter Student Name: ");
                    scanf(" %49[^\n]", books[i].issuedTo);

                    books[i].isIssued = 1;

                    printf("Book issued successfully!\n");
                }
            }
            else if (choice == 2)
            {
                if (books[i].isIssued == 0)
                {
                    printf("Book is not issued!\n");
                }
                else
                {
                    books[i].isIssued = 0;
                    books[i].issuedTo[0] = '\0';

                    printf("Book returned successfully!\n");
                }
            }
            else
            {
                printf("Invalid choice!\n");
            }

            return;
        }
    }

    printf("Book not found!\n");
}
