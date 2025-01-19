#include<stdio.h>
#include<string.h>
int main()
{
	int l,i;
	char b;
	char s1[20]="arshita";
	char s[i];
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
		{
			s1[i]=s1[i]-32;
		}	
	}
	printf("%s\n",s1);
	return 0;
}
