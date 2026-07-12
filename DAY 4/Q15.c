#include <stdio.h>
int main() 
{
    int n, c, r, arm= 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    c = n;
    while (n> 0)
    {
      r = n %10;
      arm+= r* r* r;
      n /= 10;
    }
    if (c == arm)
       printf("%d is an Armstrong number.", c);
    else
       printf("%d is not an Armstrong number.", c);

    return 0; 
  }
