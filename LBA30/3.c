/*
    3. Accept character from user and check whether it is digit or not
    (0-9)

    Input : 7
    Output : TRUE

    Input : d
    Output : FALSE
*/

#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    BOOL bFlag = FALSE;

    if(ch >= '0' && ch <= '9')
    {
        bFlag = TRUE;
    }
    return bFlag;
}

int main()
{
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the digit ");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is digit ");
    }

    else
    {
        printf("It is not digit");
    }

    return 0;
}