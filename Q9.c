
#include <stdio.h>
#include <math.h>

int main() {
    int n, i, a, g, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = n + 1; ; i++) {
        isPrime = 1;

        if (i < 2) {
            isPrime = 0;
        } else {
            g = sqrt(i);

            for (a = 2; a <= g; a++) {
                if (i % a == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime == 1) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
