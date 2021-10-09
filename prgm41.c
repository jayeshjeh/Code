//Accept number from user and check wheather that number is perfect number or not 
#include<stdio.h>
#include<stdbool.h>
bool Checkperfect(int);
int SumFactors(int);
int main()
{
    int ivalue=0;
    bool bRet = false;
    printf("Enter number\n");
    scanf("%d",&ivalue);
    bRet = Checkperfect(ivalue);
    if(bRet == true)
    {printf("Number is perfect\n");}
    else
    {printf("Number is not perfect\n");}
    return 0;
}

bool Checkperfect(int iNumber)
{
    int iSum = 0, iCnt = 0;
    if (iNumber<0)
    {
        iNumber = -iNumber;
    }
    for(iCnt=1;iCnt<=(iNumber/2);iCnt++)
    {
        if((iNumber % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
    }
        if(iSum == iNumber)
    {return true;}
    else
    {return false;}
}
