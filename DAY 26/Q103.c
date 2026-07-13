#include <stdio.h>
int main() 
{
    int choice;
    float balance = 10000, amount;
    while(1) 
    {
        printf("\nATM MENU\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice) 
        {
            case 1:
                printf("Balance = %.2f\n",balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f",&amount);
                balance += amount;
                printf("Amount Deposited.\n");
                break;
            case 3:
                printf("Enter withdraw amount: ");
                scanf("%f",&amount);

                if(amount<=balance)
                {
                    balance-=amount;
                    printf("Withdrawal Successful.\n");
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    }
}
