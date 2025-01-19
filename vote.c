#include<stdio.h>
int main()
{
	int consent,a,r,i,str=0,snr=0,rdr=0,thr=0;
	char name[20],id[12];
	printf("\n\t\t\t\tWELCOME TO ELECTION COMMISION OF PREM!!\n");
	printf("Enter ur age:\n");
	scanf("%u",&a);
	if (a<18)
	printf("Too young to vote!\n");
	else
	{
		printf("What is your name?[First name only]\n");
		scanf("%s",name);
		printf("Enter your Voting Id number:\n");
		scanf("%s",id);
		printf("---------------------------------------------------------------------------------------------------------\n");
		printf("Report:\n");
		printf("Name: %19s\n",name);
		printf("Voting Id: %11s\n",id);
		printf("Parties standing in the elections are:\n1.Pajpa\n2.Bongress\n3.Hathi\n4.Nakopilot\n");
		printf("Press respective numbers to cast the vote!!\n");
		scanf("%d",&r);
		if(r==1)
		{
			printf("Voted casted!!\nThank You!\n");
			str=str+1;
		}
		else if(r==2)
		{
			printf("Voted casted!!\nThank You!\n");
			snr=snr+1;
		}
		else if(r==3)
		{
			printf("Voted casted!!\nThank You!\n");
			rdr=rdr+1;
		}
		else if(r==4)
		{
			printf("Voted casted!!\nThank You!\n");	
			thr=thr+1;
		}
		else 
			printf("Wrong Choice!\n");
		}
	return 0;
}
