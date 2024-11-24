/*
    1. Write a program which accept string from user and return difference 
    between frequency of small characters and frequency of capital characters

    Input : MarvellouS
    Output : 6 (8-2)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCapCnt = 0, iSmCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapCnt++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmCnt++;
        }
        str++;
    }
    return (iSmCnt-iCapCnt);
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("%d\n", iRet);

    return 0;
}