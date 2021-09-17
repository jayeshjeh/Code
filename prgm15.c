#include<stdio.h>

void Display(int); // Declaration

int main()
{
	int iNo=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	Display(iNo);

	return 0;
}

void Display(int iValue) //Defination
{
	int i=0;
	
	if(iValue==0)		//Filter
	{
		printf("Your entered number is 0\n");
	}
	if(iValue<0) 		// Input Updater
	{
		iValue=-iValue;
	}
	
	for(i=1; i<=iValue; i++)
	{
		printf("%d\n",i);
	}
}
