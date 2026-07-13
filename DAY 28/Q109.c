#include <stdio.h>
#include <string.h>
struct Book {
    int id;
    char name[50];
    int issued;
};
int main() 
{
    struct Book b[50];
    int n,i;
    printf("Enter number of books: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
        printf("\nBook %d\n",i+1);
        printf("Book ID: ");
        scanf("%d",&b[i].id);
        printf("Book Name: ");
        scanf("%s",b[i].name);
        b[i].issued=0;
    }
    printf("\nAvailable Books:\n");
    for(i=0;i<n;i++) 
    {
        printf("\nID: %d",b[i].id);
        printf("\nName: %s",b[i].name);
        printf("\nStatus: Available\n");
    }
    return 0;
}
