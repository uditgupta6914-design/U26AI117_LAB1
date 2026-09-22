#include <stdio.h>

int main() {
    int num, original, remainder, result = 0, digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        int p = 1;
        for (int i = 0; i < digits; i++) p *= remainder;
        result += p;
        temp /= 10;
    }

    if (result == original) printf("%d is an Armstrong number\n", original);
    else printf("%d is NOT an Armstrong number\n", original);
    return 0;
}
