/*
    2 .Write a program which displays all elements which are prime from singly
    linear linked list.

    Function prototype : 
    int DisplayPrime(PNODE head)

    Input linked list : 11 -> 28 -> 17 -> 41 -> 6 -> 98
    Output : 11 17 41 89
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

void DisplayPrime(PNODE head)
{
    int i = 0, isPrime = 0;


    while(head != NULL)
    {
        int num = head->Data;
        isPrime = 1;

        for(i = 2; i <= num/2; i++)
        {
            if(num%i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            printf("%d\t", num);
        }

        head = head->Next;
    } 
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

    DisplayPrime(first);

    return 0;
}