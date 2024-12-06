/*
    1. Write a program which accept one number and position from user and on 
    that bit. Return modified number

    Input : 10  2
    Output : 14
*/

#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos) 
{
    if (iPos <= 0 || iPos > 32) 
    { 
        printf("Invalid position!\n");
        return iNo; 
    }

    UINT iMask = ~(1 << (iPos - 1)); 
    return iNo & iMask;             
}

int main() {
    UINT iValue, iPos;
    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter the bit position: ");
    scanf("%u", &iPos);

    UINT modifiedValue = OffBit(iValue, iPos);
    printf("Modified Number: %u\n", modifiedValue);

    return 0;
}

