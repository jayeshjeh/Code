#include<iostream>

using namespace std;

typedef struct 
{
    int foo;
} Struct;

int main()
{
    Struct struct1;
    struct1.foo = 5;

    Struct struct2 = struct1;
    struct2.foo = 10;

    cout<< struct1.foo;

    return 0;
}