/*
    1. Write a recursive program which diplay below pattern

    Output : a  b   c   d   e   f
*/
#include<stdio.h>

void DisplayR()
{
    static char iCnt = 'a';

    if(iCnt <= 'f')
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
