#include <stdio.h>

int main()
 {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    (ch >= 'a' && ch <= 'z') ? printf("It is a Small Case Letter\n") : printf("It is NOT a Small Case Letter\n");
    return 0;
}
