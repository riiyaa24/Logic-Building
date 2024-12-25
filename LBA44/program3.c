/*
    2. Write a program which returns addition of all element from singly linear
    linked list.
 
    Function prototype : 
    int Addition(PNODE head)
    
    Input linkedlist : |10|->|20|->|30|->|40|->|50|->|30|->|70|
    
    Output : 100
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

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->", head->Data);
        head = head->Next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        iCount++;
        head = head->Next;
    }
    return iCount;
}

int SearchFirstOcc(PNODE head, int no)
{
    int iPos = 0;

    while(head != NULL)
    {
        if(head->Data == no)
        {
            return iPos;
        }
        head = head->Next;
        iPos++;
    }
    return -1;
}

int Addition(PNODE head)
{
    int iSum = 0;

    while(head != NULL)
    {
        iSum = iSum + head->Data;
        head = head->Next;
    }
    return iSum;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0, iNum = 0;

    InsertFirst(&first, 10);
    InsertFirst(&first, 20);
    InsertFirst(&first, 30);
    InsertFirst(&first, 40);

    iRet = Addition(first);

    printf("The addition of all elements in the linked list are : %d\n",iRet);

    return 0;
}