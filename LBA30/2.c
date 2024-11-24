/*
    2. Accept character from user and check whether it is capital or not
    (A-Z)

    Input : F
    Output : TRUE

    Input : d
    Output : FALSE

*/

#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    BOOL bFlag = FALSE;

    if(ch >= 'A' && ch <= 'Z' )
    {
        bFlag = TRUE;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character ");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character ");
    }

    else
    {
        printf("It is not a capital character");
    }

    return 0;
}