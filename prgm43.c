#include<stdio.h>


int main()
{
    int iValue1 = 0, iValue2=0, iRet=0;

    printf("Enter firs number\n");
    scanf("%d",&iValue1);

    printf("Enter firs number\n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1,iValue2);

    printf("Resut is : %d\n",iRet);

       return 0;
}

int Power(int x, int y)
{
    int iCnt = 0;
    if(x<0)
    {x=-x;}
    if(y<0)
    {y=-y;}
    int iMult=1;
    for(iCnt =1;iCnt<=y;iCnt++)
    {
        iMult = iMult *x;
    }
    return iMult;
  
}