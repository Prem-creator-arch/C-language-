#include<stdio.h>
int main()
{
	int x,y,m;
	printf("Give first number:");
	scanf("%d",&x);
	printf("Give second number:");
	scanf("%d",&y);
	m=x%y;
	m=0?printf("No remainder\n"):printf("Has a remainder\n");
	return 0;
}
