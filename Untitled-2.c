#include <stdio.h>
int main() {
float num1, num2;

printf("Put 1st Number:");
scanf("%f", &num1);

printf("put 2nd number:");
scanf("%f", &num2);

printf("\n--- CALCULATIONS ---\n");
printf("Addition: %.2f\n", num1 + num2);
printf("Subtraction: %.2f\n", num1 - num2);
printf("Multiplication: %.2f\n", num1 * num2);
printf("Division: %.2f\n", num1 / num2);
printf("Remainder: %d\n", (int)num1 % (int)num2);

return 0;
}