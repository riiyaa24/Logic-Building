/*
    3. Write a program which accept one number from user and check whether
    9th or 12th bit is on or off

    Input : 257
    Output : TRUE
*/

#include<stdio.h> 

int ChkBit(int iNum, int iPos)
{
    int iRes = 0;
    iRes = (iNum & (1 << iPos)) != 0;
    return iRes;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isBitSet(num, 9) || isBitSet(num, 12)) {
        printf("Bit 9 or 12 is ON.\n");
    } else {
        printf("Both bits 9 and 12 are OFF.\n");
    }

    return 0;
}
