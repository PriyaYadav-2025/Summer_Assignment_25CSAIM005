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
