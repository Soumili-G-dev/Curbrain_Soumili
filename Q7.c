
#include <stdio.h>

int main() {
    int a[100], n, i, j, rem, x, y;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    x = a[0];

    for (i = 1; i < n; i++) {
        y = a[i];

        while (y != 0) {
            rem = x % y;
            x = y;
            y = rem;
        }
    }

    printf("GCD of array = %d", x);

    return 0;
}
