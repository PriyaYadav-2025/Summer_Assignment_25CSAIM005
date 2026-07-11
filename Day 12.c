#include <stdio.h>
int palindrome(int n)
{
    int pal = 0, temp = n,rem;
    while(n > 0)
    {   
        rem=n%10;
        pal = pal* 10 + rem;
        n = n / 10;
    }
    return temp == pal;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}


#include <stdio.h>
int armstrong(int n)
{
    int temp = n, arm = 0, rem;
    while(n > 0)
    {
        rem= n % 10;
        arm+= rem* rem * rem;
        n /= 10;
    }
    return temp == arm;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(armstrong(n))
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
    return 0;
}


#include <stdio.h>
void fibonacci(int n)
{
    int t1 = 0, t2 = 1, t3, i;
    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}


#include <stdio.h>
void perfect(int n)
{
    int i, sum = 0;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        sum = sum + i;
    }
    if(sum == n)
        printf("Perfect number");
    else
        printf("Not a perfect number");
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    perfect(n);
    return 0;
}


