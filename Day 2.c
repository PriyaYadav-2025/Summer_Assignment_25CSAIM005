#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter any number");
    scanf("%d",&n);
    while(n>0)
    {   rem=n%10;
        sum+=rem;
        n=n/10;
        }
    printf("Sum of digits is %d",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("Enter any number");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reverse number is %d",rev);
    return 0;
}

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

#include<stdio.h>
int main()
{
    int n,c,rem,pal=0;
    printf("Enter any number");
    scanf("%d",&n);
    c=n;
    while(n>0)
    { 
        rem=n%10;
        pal=pal*10+rem;
        n=n/10;
    }
    if(c==pal)
      printf("%d is palindrome",c);
    else
      printf("%d is not palindrome",c);
    return 0;
}
