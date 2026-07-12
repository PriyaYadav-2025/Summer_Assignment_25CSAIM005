#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter any number  ");
    scanf("%d", &n);
    for(i = 1; i <= n ; i++)
    {
      if(n%i == 0)
      {
        sum += i;
      }
    }
    if(sum == n && n > 0)
    {
     printf("%d is PERFECT NUMBER", n);
    }
    else
    {
     printf("%d is NOT PERFECT NUMBER", n);
    }
    return 0;
}
