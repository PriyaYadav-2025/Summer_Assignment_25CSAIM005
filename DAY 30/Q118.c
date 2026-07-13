#include <stdio.h>
struct Book
{
    int id;
    char name[50];
    int issued;
};
int main()
{
    struct Book b[50];
    int n, i, search, found = 0;
    printf("Enter number of books: ");
    scanf("%d", &n);
  
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Book ID: ");
        scanf("%d", &b[i].id);
        printf("Enter Book Name: ");
        scanf("%s", b[i].name);
        b[i].issued = 0;
    }

    printf("\n--- Book List ---\n");
    for(i = 0; i < n; i++)
    {
        printf("\nBook ID: %d", b[i].id);
        printf("\nBook Name: %s", b[i].name);
        printf("\nStatus: Available\n");
    }

    printf("\nEnter Book ID to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++)
    {
        if(b[i].id == search)
        {
            printf("\nBook Found");
            printf("\nBook Name: %s", b[i].name);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("\nBook not found");
    }
    return 0;
}
