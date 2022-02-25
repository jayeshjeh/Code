#include<stdio.h>     //Count Digit

int CountDigit(int);   
int main ()   

{
    int iValue=0, iRet = 0;

    printf("Enter number\n");   
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);   
    printf("Numbers of digits is : %d\n", iRet);
    return 0;
}

int CountDigit(int iNo)   
{
    //Local variables 
    int iDigit = 0, iCnt = 0;   //Short hand variable defination
    if(iNo == 0)
    {
        return 1;
    }

    while (iNo!= 0)
    {
    iDigit = iNo%10;           
    iCnt++;                     // iCnt = iCnt +1;
    iNo = iNo/10;               
    }
    return iCnt;
}
    

