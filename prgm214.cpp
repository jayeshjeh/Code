#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node * next;
    struct node *prev;
}NODE, *PNODE;

class DoublyCL
{
private:
    PNODE first;
    PNODE last;
    PNODE size;

public:
    DoublyCL()
    {
        first = NULL;
        last = NULL;
        int size = 0;
    }

    void Display();
    int Count();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no,int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int pos);
};

//Return_Value Class Name :: Function_Name(Parameters)
void DoublyCL :: InsertFirst(int no)
{
    PNODE newn = new NODE;

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn -> next = first;
        first -> prev = newn;
        first = newn;
    }
    last -> next = first;
    first -> prev = last;
    size++;
}

void DoublyCL :: DeleteFirst()
{
    
}

int main()
{
    DoublyCL obj;

    return 0;
}