#include<stdio.h>
int main()
{
	int a;
	printf("Give your age:");
	scanf("%d",&a);
	if (0<=a && a<=5)
	printf("It's a kid.");
	else if (6<=a && a<=10)
	printf("It's a child.'");
	else if (11<=a && a<=64)
	printf("It's a general.");
	else
	printf("An old person.");
	return 0;
}
	
