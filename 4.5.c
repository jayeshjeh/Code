#include<stdio.h>
int FactDiff(int iNo)
{
    int i=0,iFact =0,iNon=0;
    int iDif=0;
    for(i=1;i<=iNo;i++)
    {    if(iNo%i==0)
        {
            iFact = i;
        }
        else if (iNo%i !=0)
        {
            iNon=i;
        }
    }
    iDif = iNon-iFact;
    return iDif;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}