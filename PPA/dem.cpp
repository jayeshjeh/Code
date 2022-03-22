#include<iostream>

using namespace std;

int main(){
        int num1 = 100;
        int num2;
        int num3;     
        num2 = ++num1;
        num3 = num2++;
        
        cout<<num1<<"\n";
        cout<<num2<<"\n";
        cout<<num3<<"\n";
}