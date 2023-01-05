#include<stdio.h>
void SumNonFact(int iNo)
{
    int i=0, iSum=0;
    for(i=1;i<=iNo;i++)
    {
        if (iNo %i !=0)
        {
            i++;
        }
        iSum = iSum +i;
    }
    printf("%d",iSum);
}

int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    SumNonFact(iValue);

    return 0;
}
