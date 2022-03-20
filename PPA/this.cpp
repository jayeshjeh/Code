#include<iostream>
using namespace std;

class demo{
    public:
        int x;
        int y;

    demo(int a = 10, int b = 20){
        x = a;
        y = b;
    }

    void fun(int no){
        cout<<"Inside fun\n";
    }
};

int main(){

    demo obj1;
    demo obj3(11);
    demo obj2(11, 21);
    obj2.fun(51);

    return 0;
}
