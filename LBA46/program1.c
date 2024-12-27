/*
    1. Write a program which reverse each element of singly linked list.

    Function Prototype :

    void Reverse(PNODE head)

    Input linked list : 11 -> 28 -> 17 -> 41 -> 6 -> 89
    Output : 11 -> 82 -> 71 -> 14 -> 6 -> 98
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

void Reverse(PNODE head)
{
    int iNum = 0, iRev = 0;

    while(head != NULL)
    {   
        iNum = head->Data;
        iRev = 0;

        while(iNum != 0)
        {
            iRev = (iRev * 10) + (iNum % 10);
            iNum = iNum / 10;
        }

        printf("%d\t", iRev);
        head = head->Next;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 11);
    InsertFirst(&first, 28);
    InsertFirst(&first, 41);
    InsertFirst(&first, 6);
    InsertFirst(&first, 89);

    Reverse(first);

    return 0;
}