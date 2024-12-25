/*
    1 .Write a program which displays all elements which are perfect from singly
    linear linked list.

    Function prototype : 
    int DisplayPerfect(PNODE head)

    Input linked list : 11 -> 28 -> 17 -> 41 -> 6 -> 98
    Output : 6  28
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

void DisplayPerfect(PNODE head)
{
    int num = 0;

    while(head != NULL)
    {
        int iSum = 0;
        num = head->Data;
        
        for(int i = 1; i <= num/2; i++)
        {
            if(num%i == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == num && num != 0)
        {
            printf("%d\t", num);
        }
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
    InsertFirst(&first, 98);

    DisplayPerfect(first);

    return 0;
}