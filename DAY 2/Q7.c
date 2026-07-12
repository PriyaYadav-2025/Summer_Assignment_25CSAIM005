#include<stdio.h>
int main()
{
    int n,rem,prod=1;
    printf("Enter any number");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        prod*=rem;
        n=n/10;
    }
    printf("Product of the digits is %d",prod);
    return 0;
}
