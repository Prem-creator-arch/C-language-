#include<stdio.h>
int main()
{
	int a;
	printf("Give your marks:");
	scanf("%d",&a);
	if (0<=a && a<=35)
	printf("F");
	else if (36<=a && a<=49)
	printf("P");
	else if (50<=a && a<=59)
	printf("D");
	else if (60<=a && a<=69)
	printf("C");
	else if (70<=a && a<=79)
	printf("B");
	else if (80<=a && a<=89)
	printf("A");
	else
	printf("A+");
	return 0;
}

