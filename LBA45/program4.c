/*
    4. Write a program which returns second maximum element from singly linear
    linked list.

    Function Prototype :
    int SecMaximum(PNODE head)

    Input Linked list : 110 -> 230 -> 320 -> 240
    Output : 240
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;

    newn->Data = no;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->Next = *head;
        *head = newn;
    }
}

int SecondMaximum(PNODE head)
{
    int iMax1 = 0, iMax2 = 0; 
    head = head->Next;
    iMax1 = head->Data;

    while(head != NULL)
    {
        if(head->Data > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = head->Data;
        }

        else if(head->Data > iMax2 && head->Data < iMax1)
        {
            iMax2 = head->Data;
        }

        head = head->Next;
    }

    return iMax2;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 11);
    InsertFirst(&first, 28);
    InsertFirst(&first, 17);
    InsertFirst(&first, 41);
    InsertFirst(&first, 6);
    InsertFirst(&first, 89);

    iRet = SecondMaximum(first);

    printf("The second maximum element is : %d\n", iRet);

    return 0;
}
