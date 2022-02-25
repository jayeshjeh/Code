#include<stdio.h> //Header file inclusion   
//Sequence 
void Display(int);  // Function Declaration 


int main ()    // Entry point Function 
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);  // Function 
    return 0;
}

void Display(int iNo)   //Function Defination
{
    //Local variables 
    int iDigit = 0;

    while (iNo!= 0)
    {
    iDigit = iNo%10;            // 1 
    printf("%d\n",iDigit);      //1
    iNo = iNo/10;               //752
    }
}
