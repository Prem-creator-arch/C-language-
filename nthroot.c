#include<stdio.h>
#include<math.h>
int main () 
{ 
	int a,b;
	float d,c;
	printf("give your number:");
	scanf("%d",&a);
	printf("give the nth number:");
	scanf("%d",&b);
	d=1.0/b;
	c=pow(a,d);
	printf("The nth root of your given number is %f",c);
	return 0; 
}
