#include <stdio.h>
int main()
{
    int arr[100], n, i, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("Reversed array:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}


#include <stdio.h>
int main()
{
    int arr[100], n, i, temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    temp = arr[0];
    for(i=0;i<n-1;i++)
        arr[i] = arr[i+1];
        arr[n-1] = temp;
    printf("Array after left rotation:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}


#include <stdio.h>
int main()
{
    int arr[100], n, i, temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    temp = arr[n-1];
    for(i=n-1;i>0;i--)
        arr[i] = arr[i-1];
        arr[0] = temp;
    printf("Array after right rotation:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}


#include <stdio.h>
int main()
{
    int arr[100], n, i, j=0, temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    printf("Array after moving zeroes:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}