#include<stdio.h>
int main()
{
	float s,d;
	int n=0;
	printf("Give your salary so that you can scheme can be applied:");
	scanf("%f",&s);
	d=2*s;
	while (s<=d)
	{
		s=s+(0.1)*s;
		n++; 	
	}		
	printf("The number of months taken taken to double the salary is %d",n);
    return 0;
}

