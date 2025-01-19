#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("give the coefficeint of x^2:");
	scanf("%d",&a);
	int b;
	printf("give the coefficient of x:");
	scanf("%d",&b);
	int c;
	printf("give the end number:");
	scanf("%d",&c);
	int d;
	d=(pow(b,2)-4*a*c);
	if (d>0)
	{
		int x1;
	    x1=((-b+sqrt(pow(b,2)-4*a*c))/(2*a));
		printf("the first root is:%d\n",x1);
		int x2;
		x2=((-b-sqrt(pow(b,2)-4*a*c))/(2*a));
		printf("the second root is:%d\n",x2);
	}
	else if (d==0) 
	{
		int x;
		x=((-b-sqrt(pow(b,2)-4*a*c))/(2*a));
		printf("The roots are equal and they are:%d\n",x);
	}
	else
	{
		printf("The roots are imaginary!!");
	}
	return 0;
}
