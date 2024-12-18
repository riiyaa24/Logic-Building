/*
    1. Write a recursive program which diplay below pattern

    Input : 6
    Output : A  B   C   D   E   F

*/
#include<stdio.h>

void DisplayR(int iNo)
{
    static char cVal = 'A';

    if(iNo > 0)
    {
        printf("%c\t", cVal);
        cVal++;
        iNo--;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}
