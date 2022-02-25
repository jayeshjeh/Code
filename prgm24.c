#include<stdio.h>

void DisplayFactors(int);

int main()
{
    int iNo = 0;
     printf("Enter number\n");
     scanf("%d",&iNo);

     DisplayFactors(iNo);



    return 0;
}

void DisplayFactors(int iValue)
{
    //Logic
    int iCnt = 0;
    for(iCnt = 1; iCnt < iValue; iCnt++);
    {
        if((iValue % iCnt) == 0)  //iCnt is a factor
        {
            printf("%d\n",iCnt);
        }


    }


}
