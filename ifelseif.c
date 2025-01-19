#include<stdio.h>
#include<math.h>
int main()
{
	int val;
	printf("Give ur number:");
	scanf("%u",&val);
	if(val<0)
	printf("Negative input is not allowed\n");
	else if(val==0)
	printf("A value of zero is not allowed");
	else
	printf("The reciprocal is %.3f",1.0/val);
	return 0;
}


