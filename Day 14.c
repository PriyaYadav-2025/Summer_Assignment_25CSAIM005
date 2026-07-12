#include <stdio.h>
int main() 
{
    int arr[100], n, i, key, c = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            c = 1;
            printf("Element found at position %d", i + 1);
            break;
        }
    }
    if (c == 0)
        printf("Element not found");
    return 0;
}


#include <stdio.h>
int main() 
{
    int arr[100], n, i, key;
    int c = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find frequency: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) 
    {
        if (arr[i] == key)
            c++;
    }
    printf("Frequency of %d = %d\n", key, c);
    return 0;
}


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


#include <stdio.h>
int main()
{
    int arr[100], n, i, j;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are: ");
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
return 0;
}

