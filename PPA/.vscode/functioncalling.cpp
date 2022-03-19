#include<iostream>
using namespace std;

void callValue(int no){

}

void callAddress(int *p){

}

void callReference(int &ref){

}


int main(){

    int a = 10, b = 10, c = 10;

    callValue(a);
    callAddress(&b);
    callReference(c);


    return 0;
}
