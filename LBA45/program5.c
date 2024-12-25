/*
    5. Write a program which display addition of digits of element from singly
    linear linked list.

    Function Prototype : int SumDigit(PNODE head)

    Input linked list : 110 -> 230 -> 20 -> 240 -> 640
    Output : 2  5   2   6   10
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

void SumDigit(PNODE head)
{
    int iSum = 0, iNum = 0;

    while(head != NULL)
    {
        iNum = head->Data;
        iSum = 0;

        while(iNum != 0)
        {
            iSum = iSum + iNum% 10;
            iNum = iNum / 10;
        }

        printf("%d\t", iSum);
        head = head->Next;
    }

    printf("\n");
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 11);
    InsertFirst(&first, 28);
    InsertFirst(&first, 17);
    InsertFirst(&first, 41);
    InsertFirst(&first, 6);
    InsertFirst(&first, 89);

    SumDigit(first);

    return 0;
}
