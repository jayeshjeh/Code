#include<iostream>
using namespace std;

class Arithmetic{
    public:
    int n1;
    int n2;

    int add(){
        int ans = 0;
        ans  = n1 + n2;
        return ans;
    }

    int sub(){
        int ans = 0;
        ans  = n1 - n2;
        return ans;

    }


};

int main() {

    int v1 = 0, v2 =0, iret =0;

    cout<<"Enter first number\n";
    cin>>v1;

    cout<<"Enter second number\n";
    cin>>v2;

    Arithmetic obj1();

    return 0;
}
