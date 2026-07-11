#include <stdio.h>
int main()
{
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main() 
{
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
    {
        for(j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
 {
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
    {
        for(j = 0; j < i; j++) 
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}