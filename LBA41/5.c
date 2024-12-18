/*
    5. Write a recursive program which diplay below pattern

    Input : 6
    Output : a  b   c   d   e   f

*/
#include<stdio.h>

void DisplayR(int iNo)
{
    static char cVal = 'a';

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
