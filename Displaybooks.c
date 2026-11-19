
#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

void displayBooks() {
    struct Book books[] = {
        {1, "C Programming", "Dennis Ritchie"},
        {2, "Python Basics", "Guido van Rossum"},
        {3, "Data Structures", "Mark Allen"}
    };

    int n = 3;

    printf("\n----- BOOK DETAILS -----\n");
    printf("\nID\tBook Name\t\tAuthor\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%-20s\t%s\n",
               books[i].id,
               books[i].name,
               books[i].author);
    }
}

int main() {
    displayBooks();
    return 0;
}

