#include<iostream>
#include<stdio.h>

using namespace std;

int CapitalR(char *str)
{

    static int iCnt =0;

    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <='Z'))
        {
            iCnt++;
        }
        str++;
        CapitalR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter string\n";
    scanf("%[^\n]s",Arr);

    iRet = CapitalR(Arr);

    cout<<"Capital letters are : "<<iRet<<"\n";

    return 0;
    }