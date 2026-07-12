#include<stdio.h>
int main()
{
    int n,c,rem,pal=0;
    printf("Enter any number");
    scanf("%d",&n);
    c=n;
    while(n>0)
    { 
        rem=n%10;
        pal=pal*10+rem;
        n=n/10;
    }
    if(c==pal)
      printf("%d is palindrome",c);
    else
      printf("%d is not palindrome",c);
    return 0;
}
