#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UNIT;

bool CheckBit(UNIT iNo)
{
    UNIT iMask = 0x0000000F;
    UNIT iResult=0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UNIT iValue=0;
    bool bRet=false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet==true)
    {
        printf("1st BYTE is ON\n");
    }
    else
    {
        printf("1st BYTE is OFF\n");
    }
    return 0;
}