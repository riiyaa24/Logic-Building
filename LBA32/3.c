/*
    3. Write a program which checks whether 7th & 15th and 21st, 28th
    bit is ON or OFF.
*/

typedef int BOOL;
typedef unsigned int UNIT;
#include<stdio.h>

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    int iResult = 0;
    int iMask = 0x8104040;

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
    { printf("7th & 15th and 21st, 28th bits are ON\n"); }
    else
    { printf("7th & 15th and 21st, 28th bits are OFF\n"); }

    return 0;
}