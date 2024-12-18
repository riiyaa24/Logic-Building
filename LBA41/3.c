/*
    1. Write a recursive program which diplay below pattern

    Input : 5
    Output : 5  4   3   2   1

*/
#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t", iNo);
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
