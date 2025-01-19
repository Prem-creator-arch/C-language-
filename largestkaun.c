#include<stdio.h>
int main()
{
   double x,y,z,L;
   printf("Give your first integer:");
   scanf("%lf",&x);
   printf("Give your second integer:");
   scanf("%lf",&y);
   printf("Give your third integer:");
   scanf("%lf",&z);
   if (x>y)
   L=x;
   else 
   L=y;
   if (L>z)
   printf("The largest integer is %lf",L);
   else 
   printf("The largest integer is %.0lf",z);
	return 0;
}
