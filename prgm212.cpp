#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE, * PNODE, **PPNODE;

class SinglyCL
{
private:
    PNODE first;
    PNODE last;
    int size;

public:
    SinglyCL()
    {
        first = NULL;
        last = NULL;
        size =0;
    }    
};

int main()
{
    SinglyCL obj;

    return 0;
}