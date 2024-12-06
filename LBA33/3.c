/*
    3. Write a program which accept one number from user and toggle 7th bit of 
    that number. Return modified number.

    Input : 137
    Output : 201
    
*/

typedef int BOOL;
typedef unsigned int UNIT;
#include<stdio.h>

#define TRUE 1
#define FALSE 0

UNIT ToggleBit(UNIT iNo)
{
    int iResult = 0;
    int iMask = 0x40;

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
    { printf("15th Bit is ON\n"); }
    else
    { printf("15th Bit is OFF\n"); }

    return 0;
}