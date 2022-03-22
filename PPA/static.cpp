#include<iostream>

using namespace std;

class Demo{
    public:
        int i, j;
        static int x;

        Demo(){
            cout<<"Inside default constructor\n";
            i = 10;
            j = 20;
        }
};


int main(){

    Demo obj1;
    Demo obj2;

    cout<<sizeof(obj1)<<"\n";
    cout<<sizeof(obj2)<<"\n";

    return 0;
}
