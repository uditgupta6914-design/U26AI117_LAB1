#include <stdio.h>

int main() {
    long total_seconds;
    printf("Enter total seconds: ");
    scanf("%ld", &total_seconds);
    int h = total_seconds / 3600;
    int m = (total_seconds % 3600) / 60;
    int s = total_seconds % 60;
    printf("Time: %02d:%02d:%02d\n", h, m, s);
    return 0;
}
