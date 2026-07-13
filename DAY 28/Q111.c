#include <stdio.h>
int main() 
{
    int seats[10]={0};
    int seat, choice;
    do {
        printf("\n1.Book Ticket");
        printf("\n2.Display Seats");
        printf("\n3.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice) 
        {

        case 1:
            printf("Enter seat number (1-10): ");
            scanf("%d",&seat);
            if(seats[seat-1]==0) 
            {
                seats[seat-1]=1;
                printf("Ticket Booked Successfully");
            }
            else
                printf("Seat Already Booked");

            break;

        case 2:
            printf("\nSeat Status\n");
            for(int i=0;i<10;i++) 
            {
                printf("Seat %d : %s\n",
                i+1,
                seats[i]?"Booked":"Available");
            }
            break;
        }

    }while(choice!=3);
    return 0;
}
