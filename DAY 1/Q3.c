#include<stdio.h>
int main()
{
    int n,i, fact=1;
    printf("Enter any number");
    scanf("%d",&n);
    if(n<0)
      printf("Factorial does not exist");
    else
    { { for(i=1;i<=n;i++)
         fact*=i;
        }
      printf("Factorial od %d is %d",n,fact);
    }
    return 0;
}
