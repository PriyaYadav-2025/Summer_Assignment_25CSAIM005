#include <stdio.h>
long long factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lld\n", n, factorial(n));
    return 0;
}

#include <stdio.h>
int fibonacci(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
int main()
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}


#include <stdio.h>
int sumofDigits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumofDigits(n / 10);
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits = %d\n", sumofDigits(num));
    return 0;
}


#include <stdio.h>
int reverse = 0;
int reverseNumber(int n)
 {
    if (n == 0)
        return reverse;
        reverse = reverse * 10 + (n % 10);
        return reverseNumber(n / 10);
 }
int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number = %d\n", reverseNumber(num));
    return 0;
   }

   
