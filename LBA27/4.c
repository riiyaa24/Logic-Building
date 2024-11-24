/*
    4. Write a program which accept string from user and check whether
    it contains vowels in it or not.

    Input : "Marvellous"
    Output : TRUE

    Input : "Demo"
    Output : TRUE

    Input : "xyz"
    Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i'  ||  *str == 'o' || *str == 'u')
        {
            bFlag = TRUE;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    bRet = ChkVowel(Arr);
    if(bRet == TRUE)
    {
        printf("Contains vowel");
    }

    else
    {
        printf("There is no vowel");
    }

    return 0;
}