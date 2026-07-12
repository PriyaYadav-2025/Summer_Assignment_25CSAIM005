#include <stdio.h>
int main() 
{
    int a[50], b[50], unionArr[100];
    int n1, n2, i, j, k = 0, c;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements: ");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements: ");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    for(i = 0; i < n1; i++)
        unionArr[k++] = a[i];
    for(i = 0; i < n2; i++) 
    {
        c = 0;
        for(j = 0; j < k; j++) 
        {
            if(b[i] == unionArr[j])
            {
                c = 1;
                break;
            }
        }
        if(!c)
            unionArr[k++] = b[i];
    }

    printf("Union: ");
    for(i = 0; i < k; i++)
        printf("%d ", unionArr[i]);

    return 0;
}
