/*
    1. Write a program which accept one number and position from user and
    check whether bit at that position is on or off. If bit is one return TRUE
    otherwise return FALSE

    Input : 10  2
    Output : TRUE
*/

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos) 
{
    if (iPos <= 0 || iPos > 32) 
    { 
        printf("Invalid position!\n");
        return false;
    }

    UINT iMask = 1 << (iPos - 1); 
    return (iNo & iMask) != 0;    
}

int main() {
    UINT iValue, iPos;
    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter the bit position: ");
    scanf("%u", &iPos);

    bool result = ChkBit(iValue, iPos); 

    if (result) {
        printf("Output: TRUE\n");
    } else {
        printf("Output: FALSE\n");
    }

    return 0;
}