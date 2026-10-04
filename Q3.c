#include <stdio.h>

int main() {
    long long n, original, temp;
    long long reverse = 0;

    scanf("%lld", &n);

    original = n;

    if (n < 0) {
        temp = -n;

        while (temp > 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }

        reverse = -reverse;

        printf("%lld", original + reverse);
    }
    else {
        temp = n;

        while (temp > 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }

        if (original == reverse)
            printf("%lld", original);
        else
            printf("%lld", original + reverse);
    }

    return 0;
}