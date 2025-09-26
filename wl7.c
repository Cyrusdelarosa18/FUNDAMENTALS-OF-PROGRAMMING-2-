#include <stdio.h>
int main() {
    int n = 98765, count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    printf("Digits = %d\n", count);
    return 0;
}
