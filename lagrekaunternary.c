#include<stdio.h>
int main () 
{ 
	double x,y,z,l;
	printf("Give your first integer:");
	scanf("%lf",&x);
	printf("Give your second integer:");
	scanf("%lf",&y);
	printf("Give your third integer:");
	scanf("%lf",&z);
	x>y?(l=x):(l=y);
	l>z?(l=l):(l=z);
	printf("The largest integer is %.0lf",l);
	return 0; 
}
