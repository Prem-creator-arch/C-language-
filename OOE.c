#include<stdio.h>
int  main()
{
	int a;
	printf("Give your desired number:");
	scanf("%d",&a);
	int b;
	b=2;
	a%=b;
	if (a==0)
	printf("Number is even!\n");
	else if (a==1)
	printf("Number is odd!\n");
	return 0;
}
