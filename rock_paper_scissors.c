#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char you,char computer)
{
	if (you == computer)
	return 0;
	else if  (you=='s' && computer=='z')
	return 1;
	else if  (you=='p' && computer=='s')
	return 1;
	else if  (you=='s' && computer=='p')
	return 1;
	else if  (you=='z' && computer=='s')
	return -1;
	else if  (you=='s' && computer=='p')
	return -1;
	else if  (you=='p' && computer=='s')
	return -1;
	else if (you=='e')
	return printf("Exited");
}
int main()
{
	int i,n,cw=0,yw=0,d=0;
	char you,computer,result;
	printf("WELCOME!! ENTER s FOR STONE; p FOR PAPER; z FOR SCISSORS\n");
	scanf("%c",&you);
	if(n<33)
	computer='s';
	else if(n>33 && n<66)
	computer='p';
	else 
	computer='z';
	srand(time(NULL));
	n=rand()%100;
	result=game(you,computer);
	if(result==1)
	printf("You won!!\n");
	else if(result==-1)
	printf("You lose!!\n");
	else 
	printf("Draw!!\n");
	printf("You chose: %c and computer chose: %c",you,computer);
	if(result=1)
	yw=yw+1;
	else if(result=-1)
	cw=cw+1;
	else 
	d=d+1;
	printf("\nYou won=%d				Computer won=%d				Draw=%d",yw,cw,d);		
	return 0;
}
