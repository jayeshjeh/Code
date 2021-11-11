#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, * PNODE, ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next= NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn-> next = (*Head);
        (*Head) ->prev = newn;

        *Head= newn;
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next= NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt =0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }

    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head != NULL)       //LL contains atleast one node
    {
        *Head = (*Head)->next;
        free(temp);
        if(*Head != NULL)
        {
            (*Head)->prev = NULL;
        }    
    }
}

void DeleteFirstX(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp->prev->next = NULL;
        free(temp);
    }
}    

void DeleteLast(PPNODE Head)
{

}

int main()
{
    int icnt =0;
    PNODE first = NULL;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);

    Display(first);

    icnt = Count(first);
    printf("Number of elements are : %d\n",icnt);

    return 0;
}
