#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("%d^2 = %d\n", i, i*i);
        i++;
    } while (i*i <= 100);
    return 0;
}
