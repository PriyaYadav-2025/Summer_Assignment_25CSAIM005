#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, c = 1;
    printf("Enter a string: ");
    gets(str);
    j = strlen(str)-1;
    for(i=0; i<j; i++,j--)
    {
        if(str[i] != str[j])
        {
            c = 0;
            break;
        }
    }
    if(c)
        printf("Palindrome string");
    else
        printf("Not a palindrome string");
    return 0;
}
