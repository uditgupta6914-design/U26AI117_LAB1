#include <stdio.h>

int main() {
    int n, is_prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) is_prime = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) printf("%d is a Prime number\n", n);
    else printf("%d is NOT a Prime number\n", n);
    return 0;
}
