#include<stdio.h>
int  main()
{
	int a;
	printf("Give your desired number:");
	scanf("%d",&a);
	if (a<0)
	{
		printf("Number is negative!\n");
	}
	else if (a>=0)
	{
		printf("Number is positive!\n");
	}
	return 0;
}
