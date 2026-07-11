#include <stdio.h>
int main()
{
    int i, j, s, n = 5;
    for(i = 1; i <= n; i++)
    {
        for(s = 1; s <= n-i; s++)
            printf(" ");
        for(j = 1; j <= (2*i-1); j++)
            printf("*");
            printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int i, j, s, n = 5;
    for(i = n; i >= 1; i--)
    {
        for(s = 1; s <= n-i; s++)
          printf(" ");
        for(j = 1; j <= (2*i-1); j++)
          printf("*");
          printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int i, j, s, n = 5;
    for(i = 1; i <= n; i++)
    {
        for(s = 1; s <= n-i; s++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("%d", j);
        for(j = i-1; j >= 1; j--)
            printf("%d", j);
            printf("\n");
    }
    return 0;
}


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