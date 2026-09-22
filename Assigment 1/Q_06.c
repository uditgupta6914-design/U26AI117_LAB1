#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter numbers a&b ");
    scanf("%d %d", &a , &b );

    printf("\nBefore swap a= %d Before swap b= %d\n", a , b );
    a = a+b ;
    b = a-b ;
    a = a-b ;

     printf("\nAfter swap a= %d After swap b= %d\n", a , b );
     return 0;
}
