/*
    1. Write a program which accept string from user and accept one 
    character. Check whether that character is present in string or not.

    Input : "Marvellous Multi OS"
                e

    Output : TRUE

    Input : "Marvellous Multi OS"
                W

    Output : FALSE
*/

#define TRUE 1
#define FALSE 0
#include<stdio.h>
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = TRUE;
        }
        str++;
    }
    return bFlag;

}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    
    else
    {
        printf("Character not found");
    }

    return 0;
}