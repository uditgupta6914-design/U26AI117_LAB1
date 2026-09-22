#include <stdio.h>

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0) n = -n;
    while (n >= 10) {
        long long sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }

    printf("Single digit sum = %lld\n", n);
    return 0;
}
