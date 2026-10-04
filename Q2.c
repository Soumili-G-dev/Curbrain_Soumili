#include <stdio.h>

int main() {
    long long n, reverse = 0;
    int sign = 1;

    scanf("%lld", &n);

    if (n < 0) {
        sign = -1;
        n = -n;
    }

    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    reverse = reverse * sign;

    printf("%lld", reverse * 2);

    return 0;
}