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


int main()
{
    PNODE first = NULL;

    return 0;
}

/*
    InsertFirst(PPNODE Head, int no)
    InsertLast(PPNODE Head, int no)
    InsertAtPos(PPNODE Head, int no, int pos)

    DeleteFirst(PPNODE Head)
    DeleteLast(PPNODE Head)
    DeleteAtPos(PPNODE Head, int Pos)

    Display(PNODE Head)
    Count(PNODE Head)
*/

 