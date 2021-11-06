#include<iostream>
using namespace std;

typedef unsigned int UNIT;
/*
    op1   op2      &      |       ^
    1       0      0      1        1
    0       1      0      1        1
    1       1      1      1        0
    0       0      0      0        0
    */
//// 6th bit is on -- so off it

UNIT ToggleBit(UNIT iNo,int iPos)
{
    int iMask = 0x00000001;
    int iResult=0;

    if((iPos<1)||(iPos>32))
    {
        return 0;
    }
    iMask = iMask<<(iPos-1);

    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    int iValue =0,iRet =0,i=0;

    cout<<"Enter number\n";
    cin>>iValue;

    cout<<"Enter position of bit\n";
    cin>>i;

    iRet = ToggleBit(iValue,i);

    cout<<"Updated number is : "<<iRet<<"\n";
    return 0;
}