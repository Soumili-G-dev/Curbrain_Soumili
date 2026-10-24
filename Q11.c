
#include <stdio.h>

int main() {
    int N, i;
    long long MOD = 1000000007;
    long long result = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    long long arr[N];

    printf("Enter the array elements:\n");
    for (i = 0; i < N; i++) {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < N; i++) {
        result = (result + arr[i]) % MOD;
    }

    printf("Modular sum = %lld\n", result);

    return 0;
}
