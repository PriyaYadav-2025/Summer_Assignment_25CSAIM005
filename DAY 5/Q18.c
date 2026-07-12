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
