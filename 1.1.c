#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, * PNODE, **PPNODE;

int main()
{
    PNODE Head = NULL;
    PNODE temp1, temp2;

    InserFirst(&Head,60);
    InserFirst(&Head,50);
    InserFirst(&Head,40);
    InserFirst(&Head,30);
    InserFirst(&Head,20);
    InserFirst(&Head,10);

    temp1 = Head;
    temp2 = Head;

    while(temp1 ->next != NULL)
    {
        temp1 = temp1 -> next;
    }
    temp2 = temp2 -> next ->next;

    temp1->next = temp2;

    Display(Head);

    return 0;

}