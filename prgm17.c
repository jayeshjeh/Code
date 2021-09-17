
#include<stdio.h>

int Addition(int);

int main()
{
	int iNo = 0; int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	iRet = Addition(iNo);
	
	printf("Addition is : %d\n", iRet);
	
	return 0;
}

int Addition(int iValue)
{
	int iSum = 0;
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