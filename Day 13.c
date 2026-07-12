#include <stdio.h>
int main() 
{
    int arr[10], i;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


#include <stdio.h>
int main() 
{
    int arr[100], n, i;
    int sum = 0;
    float average;
    printf("Enter the number of elements ");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %f\n", average);
    return 0;
}


#include <stdio.h>
int main() 
{
    int arr[100], n, i;
    int max, min;
    printf("Enter the number of elements ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
    scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);
    return 0;
}


#include <stdio.h>
int main() 
{
    int arr[100], n, i;
    int even = 0, odd = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);
    return 0;
}


