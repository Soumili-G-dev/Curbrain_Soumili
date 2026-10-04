#include <stdio.h>

int main() {
    int n;
    int digits[20];
    int count = 0;

    scanf("%d", &n);

    while (n > 0) {
        int digit = n % 10;

        if (digit % 2 == 0)
            digit = 0;

        digits[count] = digit;
        count++;

        n = n / 10;
    }

    printf("[");

    for (int i = count - 1; i >= 0; i--) {
        printf("%d", digits[i]);

        if (i != 0)
            printf(", ");
    }

    printf("]");

    return 0;
}