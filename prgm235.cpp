#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head, int no)
{
    PNODE newn = new NODE;
    newn -> data = no;
    newn -> lchild = NULL;
    newn -> rchild = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        PNODE temp = *Head;
        while(1) //UnconditionalLoop    forloop for(;;)
        {
            if(temp->data == no)
            {
                delete newn;
                break;
            }
            else if(temp->data > no)
            {

            }
            else(temp->data < no)
            {

            }
        }
    }
}

int main()
{
    PNODE first = NULL;

    Insert(&first,51);
    Insert(&first,21);
    Insert(&first,101);

    return 0;
}
