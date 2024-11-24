/*
    1. Accept character from user and check whether it is alphabet or not 
    (A-Z a-z)

    Input : F
    Output : TRUE

    Input : &
    Output : FALSE
*/

#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'A' && ch <= 'Z' ) || (ch >= 'a' && ch <= 'z'))
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
        printf("It is character ");
    }

    else
    {
        printf("It is not character");
    }

    return 0;
}