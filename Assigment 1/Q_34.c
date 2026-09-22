#include <stdio.h>

int main() {
    int n;
    long long t1 = 0, t2 = 1, next_term;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%lld ", t1);
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    printf("\n");
    return 0;
}
