
#include<stdio.h>







int Factorial(int iRet);

int main()
{
	int iNo = 0;  iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	iRet = Factorial(iNo);
	
	printf("Factorial is : %d\n", iRet);
	
	return 0;
}

int Factorial(int iValue)
{
	int iSum = 1;
	int iCnt = 0;
	
	if(iValue<0)
	{
		iValue = -iValue;
	}
	
	for(iCnt=1;iCnt<=iValue; iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}
