#include<stdio.h>
#include<math.h>
int main() 
{
	int i,hcf=0,small,a,b;
	printf("Enter 2 number:");
	scanf("%d%d",&a,&b);
	small=(a>b)?b:a;
	for(i=1;i<=small;i++)
	{
		if(a%i==0&&b%i==0)
		hcf=i;
	}
	printf("the HCF is %d",hcf);
	return 0;
}

