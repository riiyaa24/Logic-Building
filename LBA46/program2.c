/*
    2. Write a program which display all palindrome elements of singly linked 
    list.

    Function Prototype :

    void DisplayPalindrome(PNODE head)

    Input linked list : 11 -> 28 -> 17 -> 414 -> 6 -> 89
    Output : 11 6 414
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


void DisplayPalindrome(PNODE head)
{
    int iNum = 0, iRev = 0, iTemp = 0;

    while(head != NULL)
    {   
        iNum = head->Data;
        iTemp = iNum;
        iRev = 0;

        while(iNum != 0)
        {
            iRev = (iRev * 10) + (iNum % 10);
            iNum = iNum / 10;
        }

        if(iTemp == iRev)
        {
            printf("%d\t", iTemp);
        }
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

    DisplayPalindrome(first);

    return 0;
}