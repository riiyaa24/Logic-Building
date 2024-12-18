/*
    1. Write a recursive program which accept string from user and count
    white spaces.

    Input : HE llo WOr lD
    Output : 3
*/
#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);

    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : ");
    scanf("%s", arr);

    iRet = WhiteSpace(arr);

    printf("%d", iRet);

    return 0;
}