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
