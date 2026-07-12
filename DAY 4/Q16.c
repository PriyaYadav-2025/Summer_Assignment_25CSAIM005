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
