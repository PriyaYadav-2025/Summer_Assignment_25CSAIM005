#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
 } 
int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);
    printf("Sum = %d", sum(a, b));
    return 0;
}


#include <stdio.h>
int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
int main()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("Maximum = %d", max(a, b));
    return 0;
}


#include <stdio.h>
int isPrime(int n)
{
    int i;
    if(n <= 1)
        return 0;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter number");
    scanf("%d", &n);
    if(isPrime(n))
        printf("Prime number");
    else
        printf("Not a prime number");
    return 0;
}


#include <stdio.h>
long long factorial(int n)
{
    long long fact = 1;
    int i;
    for(i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int main()
{
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("Factorial = %lld", factorial(n));
    return 0;
}


