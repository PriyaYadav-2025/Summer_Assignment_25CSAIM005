#include <stdio.h>
#include <string.h>
struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};
int main()
{
    struct Product p[100];
    int n = 0, choice, i, id, found;
    while(1)
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====");
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Update Product Quantity");
        printf("\n5. Delete Product");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter Product ID: ");
                scanf("%d", &p[n].id);
                printf("Enter Product Name: ");
                scanf("%s", p[n].name);
                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);
                printf("Enter Price: ");
                scanf("%f", &p[n].price);
                n++;
                printf("Product added successfully");
                break;

            case 2:
                printf("\n----- Product List -----\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nID: %d", p[i].id);
                    printf("\nName: %s", p[i].name);
                    printf("\nQuantity: %d", p[i].quantity);
                    printf("\nPrice: %.2f\n", p[i].price);
                }
                break;

            case 3:
                printf("\nEnter Product ID to search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        printf("\nProduct Found");
                        printf("\nName: %s", p[i].name);
                        printf("\nQuantity: %d", p[i].quantity);
                        printf("\nPrice: %.2f", p[i].price);

                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Product not found");
                break;

            case 4:
                printf("\nEnter Product ID to update: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        printf("Enter new quantity: ");
                        scanf("%d", &p[i].quantity);

                        printf("Quantity updated successfully");

                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Product not found");
                break;

            case 5:
                printf("\nEnter Product ID to delete: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        for(int j = i; j < n-1; j++)
                        {
                            p[j] = p[j+1];
                        }
                        n--;
                        printf("Product deleted successfully");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Product not found");
                break;

            case 6:
                printf("Exiting Inventory System...");
                return 0;

            default:
                printf("Invalid choice");
        }
    }
    return 0;
}
