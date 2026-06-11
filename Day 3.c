#include<stdio h>
int main()
{
    int n,i,c=0;
    printf("Enter any number ");
    scanf("%d",&n);
    if(n==0 || n==1)
      c=1;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
          c=1;
    }
    if(c==0)
      printf("%d is a prime number",n);
    else
      printf("%d is not a prime number",n);
    return 0;
}

#include<stdio.h>
int main()
{
    int low,high,i,c;
    printf("Enter two numbers for interval ");
    scanf("%d%d",&low,&high);
    printf("Prime numbers between %d and %d ",low,high);
    while(low<high)
    {
        c=0;
        if(low<=1)
        {
            low++;
            continue;
        }
        for(i=2;i<=low;i++)
        { 
            if(low%i==0)
              c=1;
        }
    if(c==0)
      printf("%d",low);
    low++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n1,n2,i,gcd;
    printf("Enter two numbers");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1 && i<= n2;i++)
    {
        if(n1%i==0 && n2%i==0)
          gcd=i;
    }
    printf("GCD  of %d and %d is %d",n1,n2,gcd);
    return 0;
}

#include<stdio.h>
int main()
{
    int n1,n2,max,lcm;
    printf("Enter two numbers ");
    scanf("%d%d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    lcm=max;
    while((lcm%n1!=0) || (lcm%n2!=0))
       lcm+=max;
    printf("LCM of %d and %d is %d",n1,n2,lcm);
    return 0;
}
