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


#include <stdio.h>
int main()
{
    int arr[100], n, i, j, c, max = 0, element;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c = 1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
                c++;
        }
        if(c > max)
        {
            max = c;
            element = arr[i];
        }
    }
    printf("Maximum frequency element is %d with frequency %d", element,max);
    return 0;
}


#include <stdio.h>
int main()
{
    int arr[100], n, sum, i, j, c = 0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter required sum: ");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("Pair found: %d %d\n", arr[i], arr[j]);
                c = 1;
            }
        }
    }
    if(c == 0)
        printf("No pair found");
    return 0;
}


#include <stdio.h>
int main()
{
    int arr[100], n, i, j, k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;)
        {
            if(arr[i] == arr[j])
            {
                for(k=j;k<n-1;k++)
                    arr[k] = arr[k+1];
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}


