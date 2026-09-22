#include <stdio.h>

int main() {
    double x, y;
    int n;
    printf("Enter value of x and n: ");
    scanf("%lf %d", &x, &n);

    if (n == 1) {
        y = 1 + x;
    } else if (n == 2) {
        y = 1 + (x / n);
    } else if (n == 3) {
        y = 1 + (x * x * x);
    } else {
        y = 1 + (n * x);
    }

    printf("Y(%.2lf, %d) = %.4lf\n", x, n, y);
    return 0;
}
