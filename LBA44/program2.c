/*
    2. Write a program which search last occurrence of particular element from
    singly linear linked list.

    Function should return position at which element is found 
    Function prototype : 
    int SearchLastOcc(PNODE Head, int no):
    
    Input linkedlist : |10|->|20|->|30|->|40|->|50|->|30|->|70|
    Input element : 30
    Output : 6
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

int SearchLastOcc(PNODE head, int no)
{
    int iPos = 0;
    int LastOcc = -1;

    while(head != NULL)
    {
        iPos++;
        if(head->Data == no)
        {
            LastOcc = iPos;
        }
        head = head->Next;
    }
    return LastOcc;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0, iNum = 0;

    InsertFirst(&first, 10);
    InsertFirst(&first, 20);
    InsertFirst(&first, 30);
    InsertFirst(&first, 40);
    InsertFirst(&first, 50);
    InsertFirst(&first, 30);
    InsertFirst(&first, 70);

    printf("Enter the element to search occurrence : \n");
    scanf("%d", &iNum);

    iRet = SearchLastOcc(first, iNum);

    if(iRet != -1)
    {
        printf("%d", iRet);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}