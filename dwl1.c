#include <stdio.h>
int main() {
    int choice;
    do {
        printf("\n1. Say Hi\n2. Say Bye\n3. Exit\n");
        scanf("%d", &choice);
        if (choice == 1) printf("Hi!\n");
        else if (choice == 2) printf("Bye!\n");
    } while (choice != 3);
    return 0;
}
