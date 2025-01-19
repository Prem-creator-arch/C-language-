#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if (c>='a'&& c<='z')
	c='A'+(c-'a');
	else 
	{
		printf("The Character is Capital It self!!");
		return 0;
	}
	
	printf("The letter is %c\n",c);
	return 0;
}
