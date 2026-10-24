
#include <stdio.h>

int main() {
    int n, k;
    long long sum = 0;
    int found = 0;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k < 0) {
        k = -k;
    }

    if (n == 0 || k == 0) {
        printf("0\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum % k == 0) {
            found = 1;
            break;
        }
    }

    printf("%d\n", found);

    return 0;
}
