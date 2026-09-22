#include <stdio.h>

int main() {
    float m, p, c, e, cm;
    printf("Enter marks in Maths, Physics, Chemistry (out of 200) and Entrance (out of 100): ");
    scanf("%f %f %f %f", &m, &p, &c, &e);
    cm = (m / 2.0) + (p / 2.0) + (c / 2.0) + e;
    printf("Cut-off Mark = %.2f\n", cm);
    return 0;
}
