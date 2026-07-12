#include <stdio.h>
int main() 
{
    int n,i,j,c=1;
    printf("Enter order of square matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++) 
    {
        for(j=0;j<n;j++) 
        {
            if(a[i][j]!=a[j][i])
            {
                c=0;
                break;
            }
        }
    }
    if(c)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");
    return 0;
}
