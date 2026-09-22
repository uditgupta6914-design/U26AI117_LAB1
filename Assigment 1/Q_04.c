#include <stdio.h>

int main()
{
    float fahrenite, celcius;
    printf("Enter the temperature in Fahrenite = ");
    scanf("%f", &fahrenite);
celcius = (fahrenite-32)*5/9;
printf("Temperature in centigrade = %.2f\n " , celcius);
return 0;
}
