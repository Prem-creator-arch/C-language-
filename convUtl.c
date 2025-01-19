#include<stdio.h>
int main () 
{
	int a;
    char b;
	printf("Give the desired input character to convert:");
	scanf("%c",&b);
	a=b;
	if (a>=97 && a<=122)
	{
   		a=a-32;
		b=a;
		printf("%c",b); 	
	}
	else if(a>=65 && a<=90)
	{
   		a=a+32;
		b=a;
		printf("%c",b); 	
	}
	return 0; 
}
