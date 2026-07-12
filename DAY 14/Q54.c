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
