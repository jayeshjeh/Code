#include<iostream>      //Generic Programming
using namespace std;

//Specific Function
void Swap(char *p, char *q)
{
    char temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

//Generic Function
template<class T>
void SwapX(T *p, T *q)
{
    T temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    char x ='A', y = 'B';
    SwapX(&x,&y);

    cout<<"Enter first character : "<<x<<"\n";
    cout<<"Enter second character : "<<y<<"\n";

    int i = 11, j = 21;
    SwapX(&i,&j);

    cout<<"Value of X becomes : "<<i<<"\n";
    cout<<"Value of Y becomes :  "<<j<<"\n";

    return 0;
}
