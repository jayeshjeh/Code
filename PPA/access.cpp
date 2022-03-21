#include<iostream>

using namespace std;

class Demo{
    public:
        int x;

    private:
        int y;

    public:
        Demo(){
            x = 10;
            y = 20;
        }

    void fun(){
        cout<<"Inside public fun\n";
    }

    private:
    void gun(){
        cout<<"Inside private gun\n";
    }
};

int main(){
    

    return 0;

}
