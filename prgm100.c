#include<stdio.h>

int CountFrequency(char *str,char ch)      // *str = data & str = address
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str !='\0')
    {
        if(*str ==ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[30];
    int iRet =0;
    char cValue = '\0';

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter character\n");
    scanf(" %c",&cValue);       //IMP (given space before %c) 


    iRet = CountFrequency(Arr,cValue);

    printf("Frequency is: %d\n",iRet);

    return 0;
}