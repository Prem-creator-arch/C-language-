#include<stdio.h>
int main()
{
	char a;
	int s;
	printf("Give your input:%c",a);
	scanf("%c",&a);
	s=a;
	if (65<=s && s<=90)
	{
		printf("Its a capital letter.");	
	}
	else if (97<=s && s<=122)
	{
		printf("Its a small letter.");	
	}
	else if (48<=s && s<=57)
	{
		printf("It is a number.");
	}
	else 
	printf("It is a special symbol.");
	return 0;
}
