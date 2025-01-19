#include<string.h>
int main()
{
	int t;
	char s1[20]="computer";
	char s2[20]="computer";
	t=strcmp(s1,s2);
	if(t==0)
	printf("Same");
	else 
	printf("Not same");
	return 0;
}
