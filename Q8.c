
#include <stdio.h>
#include <math.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int factors[100000];
    int count = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            factors[count++] = i;

            if (i != n / i) {
                factors[count++] = n / i;
            }
        }
    }

    // Sort factors in ascending order
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (factors[i] > factors[j]) {
                int temp = factors[i];
                factors[i] = factors[j];
                factors[j] = temp;
            }
        }
    }

    if (k > count) {
        printf("-1\n");
    } else {
        printf("%d\n", factors[k - 1]);
    }

    return 0;
}
