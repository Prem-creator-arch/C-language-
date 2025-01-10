#include<stdio.h>
int  main()
{
	int a,b,c,d,e,f;
	printf("Give your desired number:");
	scanf("%d",&a);
	b=5;
	d=a%b;
	if (d==0)
	{
		printf("Number is divisible by 5!\n");
	}
	else if (d!=0)
	{
		printf("Number is not divisible by 5!\n");
	}
	c=8;
	f=a%c;
	if (f==0)
	{
		printf("Number is divisible by 8!\n");
	}
	else if (f!=0)
	{
		printf("Number is not divisible by 8!\n");
	}
	
	return 0;
}
