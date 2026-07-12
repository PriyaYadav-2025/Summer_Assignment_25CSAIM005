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

