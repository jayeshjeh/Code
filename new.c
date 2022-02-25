#include<stdio.h>
void DisplayTable(int);
int main()
{
    int ivalue=0;

    printf("Enter number to display its table\n");
    scanf("%d", &ivalue);

    DisplayTable(ivalue);
    return 0;
}

void DisplayTable (int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d\t",iNo*iCnt);

    }
       
}