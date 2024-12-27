/*
    3. Write a program which smallest digits of all elements from singly
    linear linked list.

    Function Prototype :

    void DisplaySmall(PNODE head)

    Input linked list : 11 -> 20 -> 32 -> 41
    Output :            1      2     6     4
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


void DisplayProduct(PNODE head)
{
    int iNum = 0, iRev = 0, iProd = 1;

    while(head != NULL)
    {   
        iNum = head->Data;
        iProd = 1;

        while(iNum != 0)
        {
            iProd = iProd * (iNum % 10);
            iNum = iNum / 10;
        }

        printf("%d\t", iProd);
        head = head->Next;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 11);
    InsertFirst(&first, 28);
    InsertFirst(&first, 414);
    InsertFirst(&first, 6);
    InsertFirst(&first, 89);

    DisplayProduct(first);

    return 0;
}