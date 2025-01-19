#include<stdio.h>
int main()
{
	int m=1,t;
	t=m++;
	printf("t=%d\n",t);
	printf("m=%d",m);
	return 0;
}
#include<stdio.h>
int main()
{
	int m=1,t;
	t=++m;
	printf("t=%d\n",t);
	printf("m=%d",m);
	return 0;
}
