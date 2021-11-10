#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node*next;
}NODE, * PNODE, ** PPNODE;

void Display(PNODE Head)
{

}

int Count(PNODE Head)
{
    return 0;
}

void InsertFirst(PPNODE Head, int no)
{

}

void InsertLast(PPNODE Head, int no)
{

}

void DeleteFirst(PPNODE Head)
{

}

void DeleteLast(PPNODE Head)
{

}

int main()
{
    PNODE first = NULL;
    int iChoice = 1, value =0, iRet =0 , pos =0;

    while(iChoice != 0)
    {
        printf("\n___________________________________________________________________\n");
        printf("Enter desired operation that you want to perform in LinkedList\n");
        printf("1 : Insert the node at first position\n");
        printf("2 : Insert the node at the last position\n");
        printf("3 : Insert the node at desired position\n");
        printf("4 : Delete the first node\n");
        printf("5 : Insert the last node");
        printf("6 : Delete the node at desired position\n");
        printf("7 : Display the contents of LinkedList\n");
        printf("8 : Count the number of nodes from LinkedList\n");
        printf("0 : Terminate the application\n");
        scanf("%d",&iChoice);
        printf("\n___________________________________________________________________\n");

        switch(iChoice)
        {
            case 1:
            printf("Enter the data to insert\n");
            scanf("%d",&value);
            InsertFirst(&first,value);
            break;

            case 2:
            printf("Enter the data to insert\n");
            scanf("%d",&value); 
            InsertLast(&first,value);
            break;

            case 3:
            printf("Enter the data to insert\n");
            scanf("%d",&value);
            printf("Enter the position\n");
            scanf("%d",&pos);
            //InsertAtPos(&first,value);
            break;

            case 4:
            DeleteFirst(&first);
            break;

            case 5: 
            DeleteLast(&first);
            break;

            case 6:
            printf("Enter the position\n");
            scanf("%d",&pos);
            //DeleteAtPos(&first,pos);
            break;

            case 7:
            printf("Element of LinkedList are:\n");
            Display(first);
            break;

            case 8:
            iRet = Count(first);
            printf("Number of elements are : %d\n",iRet);
            break;

            case 0:
            printf("Thanks for using Marvellous LInked list\n");
            break;

            default:
            printf("Please enter proper choice\n");
            break;


        }
    }

    return 0;
}
