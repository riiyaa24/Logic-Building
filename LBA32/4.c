/*
    4. Write a program which checks whether 7th & 8th & 9th bit is ON or OFF.
*/

typedef int BOOL;
typedef unsigned int UNIT;
#include<stdio.h>

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    int iResult = 0;
    int iMask = 0x1c0;

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
    { printf("7th, 8th and 9th Bit is ON\n"); }
    else
    { printf("7th, 8th and 9th Bit is OFF\n"); }

    return 0;
}