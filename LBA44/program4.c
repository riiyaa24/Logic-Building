/*
    4. Write a program which return largest element from singly linear linked
    list. 

    Function prototype : 
    int Maximum(PNODE head)
    
    Input linkedlist : |110|->|230|->|320|->|240|
    
    Output : 320
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

int Maximum(PNODE head)
{
    int iRes = 0;

    iRes = head->Data;

    while(head != NULL)
    {
        if(head->Data > iRes)
        {
            iRes = head->Data;
        }
        head = head->Next;
    }
    return iRes;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0, iNum = 0;

    InsertFirst(&first, 110);
    InsertFirst(&first, 230);
    InsertFirst(&first, 320);
    InsertFirst(&first, 240);

    iRet = Maximum(first);

    printf("The largest element in linked list is : %d\n", iRet);

    return 0;
}