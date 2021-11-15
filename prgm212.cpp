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

    void Display()
    {}
    int Count()
    {
        return size;
    }  
    void InsertFirst(int no)
    {}
    void InsertLast(int no)
    {}
    void InsertAtPos(int no, int ipos)
    {}
    void DeleteFirst()
    {}
    void DeleteLast()
    {

    }
    void DeleteAtPos(int ipos)
    {

    }
};

int main()
{
    int iret=0;
    SinglyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);

    obj.Display();
    iret = obj.Count();
    cout<<"Number of elements are :"<<iret<<"\n";

    return 0;

    return 0;
}