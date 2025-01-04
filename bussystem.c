#include<stdio.h>
int main()
{
	int i,m,t;
	char name[20],number[10],source[15],destination[15],date[8];
	printf("\t**WELCOME TO PREM BUS SERVICES**\nHOW CAN WE HELP YOU?\n");
	printf("What do you want to proceed with?\n");
	printf("1.Login\n");
	printf("2.Exit\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			{
				printf("**Welcome to the login page of Prem bus services**\n");
				printf("What is your name?\n");
				scanf("%19s",name);
				printf("Provide us with your phone number:\n");
				scanf("%9s",number);
				printf("What do you want to proceed with?\n");
				printf("1.Book a Ticket\n");
				printf("2.Cancel a booked ticket\n");
				printf("3.Know your booking status\n");
				printf("4.Where is my bus\n");
				printf("5.Exit\n");
				scanf("%d",&m);
				switch(m)
				{
					case 1:
						{
							printf("To book a ticket provide us with:\n");
							printf("Source:\n");
							scanf("%14s",source);
							printf("Destination:\n");
							scanf("%14s",destination);
							printf("When do you want to travel?(FORMAT:DD-MM-YY)\n");
							scanf("%7s",date);
							printf("What is your time preference:\n 1.10AM\n 2.12PM\n 3.2PM\n 4.4PM\n 5.6PM\n");
							scanf("%d",&t);
							printf("Your ticket is booked successfully!\n");
							printf("You have successfully exited the program!!\nThanks for Visiting Prem Bus Services!!\n");
						}
					break;
					case 2:
						{
							printf("To cancel the ticket provide us with:\n");
							printf("Number:\n");
							scanf("%9s",number);
							printf("You will recive a call on your number for cancellation request in next 5 mins!!\n");
							printf("You have successfully exited the program!!\nThanks for Visiting Prem Bus Services!!\n");
						}
					break;
					case 3:
						{
							printf("To check bus ticket status:\n");
							printf("Give your number:\n");
							scanf("%9s",number);
							printf("We will summon you soon on call in next 5mins!!");
							printf("You have successfully exited the program!!\nThanks for Visiting Prem Bus Services!!\n");
						}
					break;
					case 4:
						{
							printf("To know where your bus is:\n");
							printf("Give your number:\n");
							scanf("%9s",number);
							printf("We are soon going to send you gps link of the bus via messages!!\n");
							printf("You have successfully exited the program!!\nThanks for Visiting Prem Bus Services!!\n");
						}
					break;
					case 5:
						{
							printf("You have successfully exited the program!!\nThanks for Visiting Prem Bus Services!!\n");
						}
					break;
				}
			}
		break;
		case 2:
			{
				printf("You have successfully exited the program!!\nThanks for Visiting Prem Bus Services!!\n:)");
			}
		break;
	}
}
