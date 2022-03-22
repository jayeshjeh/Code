#include<iostream>

using namespace std;

class A{

    public:
        int i;
    private:
        int j;
    protected:
        int k;
};


class B : public A{

    public:
        int x;
    private:
        int y;
    protected:
        int z;

};

class C : public B {
    public:

    private:

    protected:
    
};


int main(){


    
    return 0;

}
