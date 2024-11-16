//to calculate distance between 2 points in 2d plane
#include<stdio.h>
#include<math.h>
int main()
{
	float x1;
	printf("what is x1?\n");
	scanf("%f",&x1);
	float y1;
	printf("what is y1?\n");
	scanf("%f",&y1);
	float x2;
	printf("what is x2?\n");
	scanf("%f",&x2);
	float y2;
	printf("what is y2?\n");
	scanf("%f",&y2);
	float d;
	float a=x1-x2;
    float b=y1-y2;
    float c=(pow(a,2)+pow(b,2));
    float e;
	e=sqrt(c);
    printf("the distance between 2 points is:%f\n",e);
    return 0;
}	
