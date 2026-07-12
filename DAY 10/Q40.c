#include <stdio.h>
int main()
{
    int i, j, s;
    char ch;
    int n = 5;
    for(i = 1; i <= n; i++)
    {
        for(s = 1; s <= n-i; s++)
            printf(" ");
        for(j = 0; j < i; j++)
        {
            ch = 'A' + j;
            printf("%c", ch);
        }
        for(j = i-2; j >= 0; j--)
        {
            ch = 'A' + j;
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
