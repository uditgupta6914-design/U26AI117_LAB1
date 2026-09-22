#include <stdio.h>

int main()
 {
    long total_seconds = 31558150;
    long days = total_seconds / (24 * 3600);
    long remaining_time = total_seconds % (24 * 3600);
    long hours = remaining_time / 3600;
    remaining_time = remaining_time % 3600;
    long minutes = remaining_time / 60;
    long seconds = remaining_time % 60;

    printf("Earth's Revolution: %ld Days, %ld Hours, %ld Minutes, %ld Seconds\n",
           days, hours, minutes, seconds);
    return 0;
}
