#include <stdio.h>
#include "library.h"

Book books[MAX_BOOKS];
int bookCount = 0;

int main()
{
    int choice;

    do
    {
        printf("\n==============================");
        printf("\n   LIBRARY MANAGEMENT SYSTEM");
        printf("\n==============================");

        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue / Return Book");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                printf("Thank you for using Library System!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}
