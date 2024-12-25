/*
    3. Write a program which returns addition of all even elements from singly
    linear linked list.

    Function prototype : 
    int AdditionEven(PNODE head)

    Input linked list : 11 -> 20 -> 32 -> 41 
    Output : 52
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

int AdditionEven(PNODE head)
{
    int iSum = 0;


    while(head != NULL)
    {
        if((head->Data)%2 == 0)
        {
            iSum = iSum + head->Data;
        }
        head = head->Next;
    } 
    return iSum;
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
    InsertFirst(&first, 98);

    iRet = AdditionEven(first);

    printf("The addition of all even elements in linear linked list is : %d\n", iRet);

    return 0;
}