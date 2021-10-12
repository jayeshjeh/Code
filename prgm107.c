#include<stdio.h>

int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Its Decimal format is : %d\n",iValue);
    printf("Its Octal format is : %o\n",iValue);
    printf("Its Hexadecimal format is : %x\n",iValue);

    return 0;
}