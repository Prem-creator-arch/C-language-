#include<string.h>
int main()
{
	int t,i,flag=0;
	char s1[20]="computer";
	char s2[20]="computer";
	for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("Not Same");
	else
	printf("Same");
	return 0;
}
