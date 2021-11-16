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

void DoublyCL :: InsertLast(int no)
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
        last -> next = newn;
        newn -> prev = last;
        last = newn;
    }
    last -> next = first;
    first -> prev = last;
    size++;
}
void DoublyCL :: Display()
{
    PNODE temp = first;

    for(int i=1; i <= size; i++)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"\n";
}

int DoublyCL :: Count()
{

    return size;
}

void DoublyCL :: DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else 
    {
        first->next = first;
        delete(last->next);
        first->prev = last;
        last -> next = first;
    }
    size--;
  
}

void DoublyCL :: DeleteLast()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else 
    {
        last = last-> prev;
        delete last->next;
        first->prev = last;
        last -> next = first;
    }
    
    size--;
}

void DoublyCL :: InsertAtPos(int no, int ipos)
{
    if((ipos<1) && (ipos > size+1))
    {
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == size + 1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        PNODE temp = first;

        for(int i=1;i<ipos-1;i++)
        {
            temp = temp ->next;
        }
        newn -> next = temp->next;
        newn -> next -> prev = newn;
        temp ->next = newn;
        newn-> prev = temp;
    }

}

int main()
{
    DoublyCL obj;

    return 0;
}