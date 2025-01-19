#include<stdio.h>
int main()
{
	float salary;
	char name[20];
	printf("\t\t\t\t**WELCOME TO SALARY DISTRIBUTION CALCULATOR!!**\n");
	printf("\t\t\t\t\t\t\t\t-by Prem Kumar\n");
	printf("To move forward with the program ->\n");
	printf("Enter Your name(only first name):\n");
	scanf("%19s",name);
	printf("Enter your salary:\n");
	scanf("%f",&salary);
	printf("***---***---***---***---***---***---***---***---***---***---***---***---***---***---***---***\n");
	printf("Report:\n");
	printf("Your name:%19s\n",name);
	printf("Money for your FOOD:          %.2f\n",0.14*salary);
	printf("Money for your FUN:           %.2f\n",0.04*salary);
	printf("Money for your CLOTHES:       %.2f\n",0.06*salary);
	printf("Money for your FAMILY:        %.2f\n",0.07*salary);
	printf("Money for your DONATION:      %.2f\n",0.10*salary);
	printf("Money for your FUTURE:        %.2f\n",0.15*salary);
	printf("Money for your EMERGENCY:     %.2f\n",0.05*salary);
	printf("Money for your MATERIALS WISH:%.2f\n",0.06*salary);
	printf("Money for your PARTY:         %.2f\n",0.05*salary);
	printf("Money for POCKETS:            %.2f\n",0.17*salary);
	printf("Money for your INVESTMENTS:   %.2f\n",0.11*salary);
	printf("Hope you find this distribution very helpful!!\n");
	printf("Hope you visit again!! :)\n");
	return 0;
}
