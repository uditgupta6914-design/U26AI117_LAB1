#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swap: a = %d, b = %d\n", a, b);

    // Swapping logic
    c = a;
    a = b;
    b = c;

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}
