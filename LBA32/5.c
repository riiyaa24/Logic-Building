/*
    5. Write a program which checks whether first and last bit is ON or
    OFF. First bit means bit number 1 and last bit means bit number 32
*/

typedef int BOOL;
typedef unsigned int UNIT;
#include<stdio.h>

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    int iResult = 0;
    int iMask = 0x80000001;

    iResult = iNo & iMask;

    if(iResult == iMask)
    { return TRUE; }
    else
    { return FALSE; }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    { printf("First and Last bits are ON\n"); }
    else
    { printf("First and Last bits are OFF\n"); }

    return 0;
}