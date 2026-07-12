#include <stdio.h>
int main()
{
    int arr[100], n, i, sum = 0, total;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    total = n * (n + 1) / 2;
    printf("Missing number is: %d", total - sum);
    return 0;
}
