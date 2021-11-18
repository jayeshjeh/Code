#include<iostream>
using namespace std;

int Sum(int Arr[], int iSize)
{
    int iSum =0, i = 0;

    for(i=0; i<iSize; i++)
    {
        iSum = iSum +Arr[i];
    }

    return iSum;

}

int main()
{
    int iLength =0, i =0;
    int *p = NULL;

    cout<<"Enter the number of elements\n";
    cin>>iLength;

    p = new int[iLength];

    cout<<"Enter elements\n";
    for(i=0;i<iLength;i++)
    {
        cin>>p[i];
    }

    int iRet =0;
    iRet = Sum(p,iLength);
    cout<<"Addition is : "<<iRet<<"\n";

    delete []p;
    return 0;
}