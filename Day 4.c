#include <stdio.h>
int main()
 {
    int i, n,t3;
    int t1 = 0, t2 = 1;
    t3 = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    for (i = 3; i <= n; ++i)
     {
      printf("%d, ", t3);
      t1 = t2;
      t2 = t3;
      t3 = t1 + t2;
     }
    return 0;
}



#include<stdio.h> 
int fib(int n)
    {
if (n <= 1)    
    return n; 
    return fib(n-1) + fib(n-2); 
    } 

    int main () 
    { 
    int n = 9; 
    printf("%d", fib(n)); 
    getchar(); 
    return 0; 
    }


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


  #include <math.h>
  #include <stdio.h>
  int main() 
  {
    int low, high, n, p, r, c = 0;
    double result = 0.0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);
    if (high < low) 
  {
    high += low;
    low = high - low;
    high -= low;
   }
    for (n= low + 1; n < high; n++)
    {
     p= n;
     while (p!= 0)
      {
        p /= 10;
        ++count;
      }

     p = n;
     while (p != 0)
     {
       r= p % 10;
       result += pow(r, c);
       p/= 10;
     }
     if ((int)result == n)
     {
       printf("%d ", n);
      }
     c= 0;
     result = 0;
   }
   return 0;
  }
