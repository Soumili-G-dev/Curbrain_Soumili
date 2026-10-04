#include <stdio.h>

int main() {
    int n, a, b;
    int countA = 0;
    int countB = 0;

    scanf("%d %d %d", &n, &a, &b);

    if (n == 0) {
        if (a == 0)
            countA++;

        if (b == 0)
            countB++;
    }
    else {
        while (n > 0) {
            int digit = n % 10;

            if (digit == a)
                countA++;

            if (digit == b)
                countB++;

            n = n / 10;
        }
    }

    int difference = countA - countB;

    if (difference < 0)
        difference = -difference;

    printf("%d", difference);

    return 0;
}