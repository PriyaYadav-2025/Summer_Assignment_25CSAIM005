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
