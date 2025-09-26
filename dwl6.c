#include <stdio.h>
int main() {
    int choice, a, b;
    do {
        printf("\n1. Add\n2. Subtract\n3. Exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Sum = %d\n", a+b);
        } else if (choice == 2) {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Difference = %d\n", a-b);
        }
    } while (choice != 3);
    return 0;
}
