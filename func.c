#include <stdio.h>
float myfunc (float r)
	{
		float a;
		a=3.14*r*r;
		return a;
	}
int main()
{
	float radius,area;
	printf("Give the radius of circle:",radius);
	scanf("%f",&radius);
	area=myfunc(radius);
	printf("\nArea of the circle is:%f",area);	
    return 0;
}

