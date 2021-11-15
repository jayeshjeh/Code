#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail, int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = *Head;
}

void InsertLast(PPNODE Head,PPNODE Tail, int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail) ->next = newn;
        *Tail = newn;
    }
    (*Tail)->next = *Head;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{

}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{

}

void DeleteLast(PPNODE Head, PPNODE tail)
{

}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{

}

void Display(PNODE Head, PNODE Tail)
{
    if((Head == NULL) && (Tail == NULL))
    {
        return;
    }
    do
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    } while (Head != Tail->next);

    printf("\n");
    
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt =0;
    if((Head == NULL) && (Tail == NULL))
    {
        return 0;
    }
    do
    {
        iCnt++;
        Head = Head->next;
    } while (Head != Tail->next);

    return iCnt;
    

    return 0;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iret =0;

    InsertFirst(&first, &last, 51);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 11);

    InsertLast(&first,&last,101);

    Display(first,last);
    iret = Count(first,last);
    printf("Number of elements are : %d\n",iret);

    return 0;
}