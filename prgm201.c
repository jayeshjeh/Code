#include<stdio.h>
#include<stdlib.h> //Self Referential Structure

struct node
{
    int data;
    struct node *next;
};

typedef struct node  NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    PNODE First = NULL;

    return 0;
}