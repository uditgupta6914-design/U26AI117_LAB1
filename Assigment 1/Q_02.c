    #include <stdio.h>

int main()
 {
    float marks[5], total = 0, percentage;
    printf("Enter Marks of 5 subjects out of 100 each");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
     percentage =(total/500)*100;
     printf("Total Marks is = %.2f\nPercentage = %.2f%%\n", total, percentage);
     return 0;
}
