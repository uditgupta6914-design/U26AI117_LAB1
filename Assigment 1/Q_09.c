#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    printf("Enter hours, minutes, and seconds: ");
    scanf("%d %d %d", &hours, &minutes, &seconds);
    long total_sec = (hours * 3600) + (minutes * 60) + seconds;
    printf("Total Seconds = %ld\n", total_sec);
    return 0;
}
