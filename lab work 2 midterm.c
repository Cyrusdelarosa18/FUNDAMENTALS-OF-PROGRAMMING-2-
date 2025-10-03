#include <stdio.h>

int main() {
    int choice;
    float quantity, price, total = 0, payment, change;
    char again;

    do {
        total = 0;
        do {
            printf("\nWhat do you want to purchase?\n");
            printf("1. Vegetable (₱54.5/kilo)\n");
            printf("2. Fruits (₱120-150/kilo) - Using average ₱135/kilo\n");
            printf("3. Milk (₱90/pack)\n");
            printf("4. Soap (₱29.45/bar)\n");
            printf("5. Shampoo and Conditioner (₱140/bottle)\n");
            printf("0. Finish purchase\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch(choice) {
                case 1:
                    printf("Enter quantity in kilos: ");
                    scanf("%f", &quantity);
                    price = 54.5 * quantity;
                    total += price;
                    printf("Added ₱%.2f to total.\n", price);
                    break;
                case 2:
                    printf("Enter quantity in kilos: ");
                    scanf("%f", &quantity);
                    price = 135.0 * quantity; // Average price
                    total += price;
                    printf("Added ₱%.2f to total.\n", price);
                    break;
                case 3:
                    printf("Enter quantity in packs: ");
                    scanf("%f", &quantity);
                    price = 90.0 * quantity;
                    total += price;
                    printf("Added ₱%.2f to total.\n", price);
                    break;
                case 4:
                    printf("Enter quantity in bars: ");
                    scanf("%f", &quantity);
                    price = 29.45 * quantity;
                    total += price;
                    printf("Added ₱%.2f to total.\n", price);
                    break;
                case 5:
                    printf("Enter quantity in bottles: ");
                    scanf("%f", &quantity);
                    price = 140.0 * quantity;
                    total += price;
                    printf("Added ₱%.2f to total.\n", price);
                    break;
                case 0:
                    // End of current purchase
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
            }
        } while (choice != 0);

        printf("\nTotal purchase: ₱%.2f\n", total);
        printf("Enter your payment amount: ₱");
        scanf("%f", &payment);

        if (payment >= total) {
            change = payment - total;
            printf("Your change: ₱%.2f\n", change);
        } else {
            printf("Insufficient payment. You still owe ₱%.2f\n", total - payment);
        }

        printf("\nDo you want to purchase again? (Y/N): ");
        scanf(" %c", &again);  // Notice space before %c to consume any leftover newline

    } while (again == 'Y' || again == 'y');

    printf("\nThank you for shopping!\n");

    return 0;

}
