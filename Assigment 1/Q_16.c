#include <stdio.h>

int main()
 {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b)
     {
        if (a >= c) 
        printf("Max = %d\n", a);
        else 
        printf("Max = %d\n", c);
    } 
    else 
    {
        if (b >= c)  
        printf("Max = %d\n", b);
        else 
        printf("Max = %d\n", c);
    }
    return 0;
}
