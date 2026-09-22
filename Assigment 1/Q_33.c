#include <stdio.h>

int main() {
    int n, val, max, min;
    printf("Enter count of numbers (N): ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &val);
    max = min = val;

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &val);
        if (val > max) max = val;
        if (val < min) min = val;
    }

    printf("Max = %d\nMin = %d\n", max, min);
    return 0;
}
