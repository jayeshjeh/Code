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



    return 0;
}
