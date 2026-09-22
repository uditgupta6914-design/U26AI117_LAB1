#include <stdio.h>

int main() 
{
    char ch;
    printf("Enter any charecter = ");
    scanf("%c" , &ch);
                if ( ch >= 'A' && ch <= 'Z' )
                {
                    printf("Capital Letter\n");
                }
                else if ( ch >= '0' && ch <= '9' )
                {
                    printf("It is a Number\n");
                }
                else if ( ch >= 'a' && ch <= 'z' )
                    {
                         printf("Small Letter\n");
                    }
                 else
                    {
                         printf("Special Charecter\n");
                    }
}
