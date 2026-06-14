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


#include <stdio.h>
int main()
{
    int i, s, n, r, sum;
    long fact;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &n);
    s = n;
    sum = 0;
    while(n > 0)
    {
        r = n% 10;
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
          fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if(sum ==s)
    {
      printf("%d is STRONG NUMBER", s);
    }
    else
    {
      printf("%d is NOT STRONG NUMBER", s);
    }
    return 0;
}


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


#include <stdio.h>
#include<math.h>
long long m(long long n)
{
    long long max=-1;
    while(n%2==0)
    {
        max=2;
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2)
        while(n%i==0)
        {
            max=i;
            n/=i;
        }
    if(n>2)
        max=n;
    return max;
}
int main()
{
    long long n;
    printf("Enter a number:\n");
    scanf("%lld",&n);
    printf("%lld\n",m(n));

    return 0;
}
