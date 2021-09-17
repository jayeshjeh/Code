#include<stdio.h> //Header file inclusion   
//Sequence 
void Display();  // Function Declaration 

int main ()    // Entry point Function 
{
    Display();  // Function 

    return 0;
}

void Display()   //Function Defination

{
    //Local variables 
    int iNo = 7521;
    int iDigit = 0;
    while (iNo!= 0)
    {

    iDigit = iNo%10;            // 1 
    printf("%d\n",iDigit);      //1
    iNo = iNo/10;               //752
    
    }
    
}
