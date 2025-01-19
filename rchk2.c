#include<stdio.h>
int main()
{
	int value;
	printf("Give ur number:");
	scanf("%u",&value);
	float Result;
	if (value>0)
	Result=1.0/value;
    printf("Result=%.3f\n",Result);
	return 0;
}
//negative number pe bhi answer milta hai
