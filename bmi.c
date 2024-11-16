#include<stdio.h>
#include<math.h>
int main()
{
	int u;
	float mass,h,hcm,age,gender,BMI,mlbs,hin;
	printf("what is your age?\n");
	scanf("%f",&age);
	printf("What is your gender(Enter 1 for male and 2 for female)?\n");
	scanf("%f",&gender);
	printf("We know the formula of BMI is weight/(height in m)^2\n");
	printf("In what units is your (weight,height) in?\n1.(Kilograms,meters)\n2.(Kilograms,centimeters)\n3.(Pounds,meters)\n4.(Pounds,centimeters)\n5.(Kilograms,inches)\n6.(Pounds,inches)\nNOTE:PRESS THE NUMBER IN WHICH YOUR INPUT IS TO BE TAKEN!!\n");
	scanf("%d",&u);
	switch (u)
	{
		case 1:
			printf("What is your weight?in Kgs\n");
			scanf("%f",&mass);
			printf("What is your height?in m\n");
			scanf("%f",&h);
			BMI=mass/pow(h,2);
			printf("Your BMI is %.2f\n",BMI);
			if(BMI>=0 && BMI<=18)
			printf("You are under weight!!Work On your diet!!\n");
			if(BMI>18 && BMI<=25)
			printf("You are under Normal!!Good diet!!\n");
			if(BMI>25 && BMI<=30)
			printf("You are a bit over weight!!Well balance your diet!!\n");
			if(BMI>30 && BMI<=100)
			printf("You are over weight!!Work on your diet watch you plate!!\n");
		break;
		case 2:
			printf("What is your weight?in Kgs\n");
			scanf("%f",&mass);
			printf("What is your height?in cm\n");
			scanf("%f",&hcm);
			h=hcm/100;
			BMI=mass/pow(h,2);
			printf("Your BMI is %.2f\n",BMI);
			if(BMI>=0 && BMI<=18)
			printf("You are under weight!!Work On your diet!!\n");
			if(BMI>18 && BMI<=25)
			printf("You are under Normal!!Good diet!!\n");
			if(BMI>25 && BMI<=30)
			printf("You are a bit over weight!!Well balance your diet!!\n");
			if(BMI>30 && BMI<=100)
			printf("You are over weight!!Work on your diet watch you plate!!\n");
		break;
		case 3:
			printf("What is your weight?in lbs\n");
			scanf("%f",&mlbs);
			printf("What is your height?in m\n");
			scanf("%f",&h);
			mass=mlbs/2.20462;
			BMI=mass/pow(h,2);
			printf("Your BMI is %.2f\n",BMI);
			if(BMI>=0 && BMI<=18)
			printf("You are under weight!!Work On your diet!!\n");
			if(BMI>18 && BMI<=25)
			printf("You are under Normal!!Good diet!!\n");
			if(BMI>25 && BMI<=30)
			printf("You are a bit over weight!!Well balance your diet!!\n");
			if(BMI>30 && BMI<=100)
			printf("You are over weight!!Work on your diet watch you plate!!\n");
		break;
		case 4:
			printf("What is your weight?in lbs\n");
			scanf("%f",&mlbs);
			printf("What is your height?in cm\n");
			scanf("%f",&hcm);
			mass=mlbs/2.20462;
			h=hcm/100;
			BMI=mass/pow(h,2);
			printf("Your BMI is %.2f\n",BMI);
			if(BMI>=0 && BMI<=18)
			printf("You are under weight!!Work On your diet!!\n");
			if(BMI>18 && BMI<=25)
			printf("You are under Normal!!Good diet!!\n");
			if(BMI>25 && BMI<=30)
			printf("You are a bit over weight!!Well balance your diet!!\n");
			if(BMI>30 && BMI<=100)
			printf("You are over weight!!Work on your diet watch you plate!!\n");
		break;
		case 5:
			printf("What is your weight?in Kgs\n");
			scanf("%f",&mass);
			printf("What is your height?in inches\n");
			scanf("%f",&hin);
			h=hin/39.3701;
			BMI=mass/pow(h,2);
			printf("Your BMI is %.2f\n",BMI);
			if(BMI>=0 && BMI<=18)
			printf("You are under weight!!Work On your diet!!\n");
			if(BMI>18 && BMI<=25)
			printf("You are under Normal!!Good diet!!\n");
			if(BMI>25 && BMI<=30)
			printf("You are a bit over weight!!Well balance your diet!!\n");
			if(BMI>30 && BMI<=100)
			printf("You are over weight!!Work on your diet watch you plate!!\n");
		break;
		case 6:
			printf("What is your weight?in lbs\n");
			scanf("%f",&mlbs);
			printf("What is your height?in inches\n");
			scanf("%f",&hin);
			mass=mlbs/2.20462;
			h=hin/39.3701;
			BMI=mass/pow(h,2);
			printf("Your BMI is %.2f\n",BMI);
			if(BMI>=0 && BMI<=18)
			printf("You are under weight!!Work On your diet!!\n");
			if(BMI>18 && BMI<=25)
			printf("You are under Normal!!Good diet!!\n");
			if(BMI>25 && BMI<=30)
			printf("You are a bit over weight!!Well balance your diet!!\n");
			if(BMI>30 && BMI<=100)
			printf("You are over weight!!Work on your diet watch you plate!!\n");
		break;
	}
	printf("Thank You!!\n");
	printf("The Authour is not responsiible for any inaccuracy in data!");
	return 0;	
}
