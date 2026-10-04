#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int product = 1;

    scanf("%d", &n);

    while (n > 0) {
        int digit = n % 10;

        sum = sum + digit;
        product = product * digit;

        n = n / 10;
    }

    printf("%d", product - sum);

    return 0;
}