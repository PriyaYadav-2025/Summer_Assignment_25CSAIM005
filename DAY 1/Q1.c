#include<stdio.h>
int main()
{
    int i ,n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
      sum+=i;
    printf("sum of first %d natural numbers is %d",n,sum);
    return 0;
}
  
