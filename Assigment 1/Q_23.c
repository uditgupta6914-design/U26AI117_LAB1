#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exp;
    printf("Enter base and integer exponent: ");
    scanf("%lf %d", &base, &exp);

    int abs_exp = (exp < 0) ? -exp : exp;
    for (int i = 0; i < abs_exp; i++) {
        result *= base;
    }
    if (exp < 0) result = 1.0 / result;

    printf("Result = %.4lf\n", result);
    return 0;
}
