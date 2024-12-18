/*
    3. Write a recursive program which accept string from user and count number
    of characters.

    Input : Hello
    Output : 5

*/
#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;

    while(str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z' && *str >= 'a' && *str <= 'z')
        {
            iCount++;
        }   
        str++;
        Strlen(str);
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : ");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
}