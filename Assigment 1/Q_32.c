#include <stdio.h>
#include <limits.h>

int main() {
    int n, val;
    int max = INT_MIN, second_max = INT_MIN;
    printf("Enter count of numbers (N >= 2): ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        if (val > max) {
            second_max = max;
            max = val;
        } else if (val > second_max && val < max) {
            second_max = val;
        }
    }

    printf("Max = %d\n", max);
    if (second_max == INT_MIN)
        printf("Second Max does not exist (all numbers equal)\n");
    else
        printf("Second Max = %d\n", second_max);
    return 0;
}
