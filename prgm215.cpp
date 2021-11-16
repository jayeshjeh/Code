#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class Stack
{
private:
    PNODE first;
    int size;

public:
    Stack()
    {
        first = NULL;
        size =0;
    }

    void push(int no)
    {

    }

    int pop()
    {

    }

    void Display()
    {

    }

    int Count()
    {
        return size;
    }
};

int main()
{
    Stack obj;

    obj.push(11);
    obj.push(21);
    obj.push(51);
    obj.push(101);

    int iret = obj.pop();
    cout<<iret;

    obj.Display();
    iret = obj.Count();

    cout<<

    return 0;

}