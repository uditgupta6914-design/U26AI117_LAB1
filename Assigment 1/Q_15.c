#include <stdio.h>

int main() 
{
    float marks[5], total = 0, percentage;
    printf("Enter marks of 5 subject \n");
    for (int i=0 ; i<5 ; i++)
    {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
        percentage= total/5.0;

        printf("total marks is = %.2f\n", total);
        printf("Percentage is = %.2f%%\n",percentage);

            if (percentage >= 90)
                    printf("First Division\n");
                else if (percentage >=80 )
                    printf("Second Division\n");
                else if (percentage >= 70)
                     printf("Third Division\n");
                else if (percentage >= 40)
                     printf("Fourth Division\n");
                 else
                     printf("Fail\n");
        
        
        return 0;
}
