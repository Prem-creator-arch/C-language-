#include<stdio.h>
#include<math.h>
int main() 
{
	int n,t,s=0,save;
	printf("Give your input:");
	scanf("%d",&n);
	save=n;
	while(n!=0)
	{
		t=n%10;
		n=n/10;
		s=s+pow(t,3);
	}
	if(s==save)
	printf("\nArmstrong");
	else
	printf("\nNot armstrong.");
	return 0;
}

