#include<iostream>

using namespace std;

class Demo{
    int i;
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

    Demo obj;
    cout<<obj.x<<"\n";
    cout<<obj.y<<"\n";
    cout<<obj.i<<"\n";

    return 0;

}
