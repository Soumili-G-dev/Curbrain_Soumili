
#include <stdio.h>

int main() {
    long long base, power, MOD;
    long long result;

    scanf("%lld %lld %lld", &base, &power, &MOD);

    result = 1 % MOD;
    base = base % MOD;

    for (long long i = 1; i <= power; i++) {
        result = (result * base) % MOD;
    }

    printf("%lld\n", result);

    return 0;
}
