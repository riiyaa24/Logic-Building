/*
    1. Write a recursive program which diplay below pattern

    Output : A  B   C   D   E   F
*/
#include<stdio.h>

void DisplayR()
{
    static char iCnt = 'A';

    if(iCnt <= 'F')
    {
        printf("%c \t", iCnt);
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}
