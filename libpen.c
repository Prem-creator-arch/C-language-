#include<stdio.h>
int  main()
{
	int n,m,pages,price;
	float r;
	char name[20],book[40];
	printf("\t**WELCOME**\n TO THE E-LIBRARY OF THE INSTITUTE!!\n\n");
	printf("What is your name?\n");
	scanf("%19s",name);
	printf("What is the name of the book?\n");
	scanf("%39s",book);
	printf("How many pages does the book has?\n");
	scanf("%d",&pages);
	printf("what is the price of the book?\n");
	scanf("%d",&price);
	printf("Do you want to:\n 1.Borrow\n 2.Pay due fees\n");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("Report For Borrowing:");
			printf("Name of the borrower:%19s",name);
			printf("Name of the book:%39s",book);
			printf("No. of pages of the book:%d",pages);
			printf("Price of the book:%d",price);
			printf("You can issue the book!!");
		break;
		case 2:
			printf("Report For Borrowing:");
			printf("Name of the borrower:%19s",name);
			printf("Name of the book:%39s",book);
			printf("No. of pages of the book:%d",pages);
			printf("Price of the book:%d",price);
			printf("How many days did you have the book?\n");
			scanf("%d",&n);
			if (n<=5)
			r=n*0.5;
			printf("The rent is %.2f",r);
			break;
			if (n>5)
			r=(n-5)*0.5+2.5;
			printf("The rent is %.2f",r);
			break;
		}
	return 0;
}
