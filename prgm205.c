#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));    //1st - Allocate the memory

    newn->data = no;                        //Initialise the node
    newn->next = NULL;

    if(*Head = NULL)
    {
        *Head = newn;
    }
    else
    {
        *
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));    //1st - Allocate the memory
    newn->data = no;                        //Initialise the node
    newn->next = NULL;

    if(*Head = NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51);     //InsertFirst(50,51)
    InsertFirst(&first,21);     //InsertFirst(50,21)
    InsertFirst(&first,11);     //InsertFirst(50,11)

    return 0;
}

/*
    void InsertFirst(PPNODE Head, int no)
    void InsertLast(PPNODE Head, int no)
    void InsertAtPos(PPNODE Head, int no, int pos)

    void DeleteFirst(PPNODE Head)
    void DeleteLast(PPNODE Head)
    void DeleteAtPos(PPNODE Head, int Pos)

    void Display(PNODE Head)
    int Count(PNODE Head)
*/

 