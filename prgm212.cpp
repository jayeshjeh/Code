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
    {
        PNODE temp = first;

        if((first == NULL) && (last == NULL))
        {
            return;
        }

        do
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
        } while(temp != last->next);
        
        cout<<"\n";
    }

    int Count()
    {
        return size;
    }  

    void InsertFirst(int no)
    {
        PNODE newn = new NODE;

        newn->data = no;
        newn->next = NULL;

        if((first == NULL) && (last == NULL))
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }

        last ->next = first;
        size++;
    }

    void InsertLast(int no)
    {
        PNODE newn = new NODE;

        newn->data = no;
        newn->next = NULL;

        if((first == NULL) && (last == NULL))
        {
            first = newn;
            last = newn;
        }
        else
        {
            last->next = newn;
            last = newn;
        }

        last ->next = first;
        size++;
    }

    void InsertAtPos(int no, int ipos)
    {

    }

    void DeleteFirst()
    {
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {

        }
        else
        {
            
        }
    }

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
}