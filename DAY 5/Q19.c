#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter any number  ");
    scanf("%d", &n);
    printf("All factors of %d are: \n", n);
    for(i=1; i<=n; i++)
    {
      if(num % i == 0)
      {
         printf("%d, ",i);
      }
    }
    return 0;
}
