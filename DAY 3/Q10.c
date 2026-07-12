#include<stdio.h>
int main()
{
    int low,high,i,c;
    printf("Enter two numbers for interval ");
    scanf("%d%d",&low,&high);
    printf("Prime numbers between %d and %d ",low,high);
    while(low<high)
    {
        c=0;
        if(low<=1)
        {
            low++;
            continue;
        }
        for(i=2;i<=low;i++)
        { 
            if(low%i==0)
              c=1;
        }
    if(c==0)
      printf("%d",low);
    low++;
    }
    return 0;
}
