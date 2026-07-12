#include<stdio.h>
int main() 
{
    int arr[100],i,max,smax;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter %d elements   :\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    smax = arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < max && smax > arr[i - 1])
        {
            smax = arr[i];
        }
    }
    printf("\nThe second largest number is: %d", smax);
    return 0;
}
