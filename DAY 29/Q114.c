#include <stdio.h>
int main()
{
    int arr[100], n, choice, i, pos, value, search, found;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while(1)
    {
        printf("\n===== ARRAY OPERATIONS MENU =====");
        printf("\n1. Display Array");
        printf("\n2. Insert Element");
        printf("\n3. Delete Element");
        printf("\n4. Search Element");
        printf("\n5. Sort Array");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                break;
          
            case 2:
                printf("Enter position to insert (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &value);
                for(i = n; i > pos; i--)
                {
                    arr[i] = arr[i-1];
                }
                arr[pos] = value;
                n++;
                printf("Element inserted successfully");
                break;
          
            case 3:
                printf("Enter position to delete (0 to %d): ", n-1);
                scanf("%d", &pos);
                for(i = pos; i < n-1; i++)
                {
                    arr[i] = arr[i+1];
                }
                n--;
                printf("Element deleted successfully");
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &search);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(arr[i] == search)
                    {
                        found = 1;
                        printf("Element found at position %d", i);
                        break;
                    }
                 }
                if(found == 0)
                    printf("Element not found");
                break;

            case 5:
                for(i = 0; i < n-1; i++)
                {
                    for(int j = i+1; j < n; j++)
                    {
                        if(arr[i] > arr[j])
                        {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Array sorted successfully");
                break;

            case 6:
                printf("Exiting program...");
                return 0;
            default:
                printf("Invalid choice");
        }
    }
    return 0;
}
