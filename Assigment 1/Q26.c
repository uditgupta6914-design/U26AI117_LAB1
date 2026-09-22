#include <stdio.h>

int main() {
    int n, sum_even = 0, sum_odd = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) sum_even += i;
        else sum_odd += i;
    }

    printf("Sum of Even numbers = %d\n", sum_even);
    printf("Sum of Odd numbers = %d\n", sum_odd);
    return 0;
}
