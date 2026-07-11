#include <stdio.h>
int main() 
{
    int decimal, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal == 0)
     {
        printf("Binary = 0\n");
        return 0;
     }

    while (decimal > 0)
     {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
     }

    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--) 
     {
        printf("%d", binary[j]);
     }
    printf("\n");
    return 0;
 }


 #include <stdio.h>
 int main()  
 {
     long long binary;
    int decimal = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    while (binary > 0)
     {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
     }
    printf("Decimal = %d\n", decimal);
    return 0;
  }


  #include<stdio.h>
  int main() 
  {
        int num, count = 0;
        printf("Enter a number: ");
        scanf("%d", &num);
        while (num > 0)
        {
            if (num & 1)
             count++;
              num = num >> 1;
        }
        printf("Number of set bits = %d\n", count);
        return 0;
  }
  

  #include <stdio.h>
  int main() 
  {
      int x, n, i;
      long long result = 1;
      printf("Enter the base (x): ");
      scanf("%d", &x);
      printf("Enter the exponent (n): ");
      scanf("%d", &n);
      for (i = 1; i <= n; i++)
      {
        result = result * x;
      }
      printf("%d^%d = %lld\n", x, n, result);
      return 0;
  }
