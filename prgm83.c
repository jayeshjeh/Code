#include<stdio.h>

typedef unsigned int UNIT;

UNIT strlenX(char *str) //UNIT unsigned interger doesnt accept negative number
{
    int iCnt =0;

    if(str == NULL)
    return 0;

    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    UNIT iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr); //Accept the string till not getting enter

    iRet = strlenX(Arr);
    printf("Length of string is : %d\n",iRet);   

    return 0;
}