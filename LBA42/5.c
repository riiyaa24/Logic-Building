/*
    5. Write a recursive program which accept number from user and return its
    product of digits.

    Input : 523
    Output : 30

*/
#include<stdio.h>

int Mult(int iNo)
{
    static int iAns = 1;

    if(iNo > 0)
    {
        iAns = iAns * (iNo % 10);
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("%d", iRet);

    return 0;
}