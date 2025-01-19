#include<stdio.h>
int main()
{
	int value;
	printf("Give ur number:");
	scanf("%u",&value);
	float Result;
	if (value>0)
	{
		Result=1.0/value;
		printf("Result=%.3f\n",Result);
	}
	else
	printf("Give ur number more than zero!!");
	return 0;
}
//negative me answer nahi milta
