/*
    5. Write a program which accept string from user and copy that
    characters of that string into another string by toggling that case.

    Input : "Marvellous Python 2"
    Output : "mARVELLOUS pYTHON 2"
*/

#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
        }

        else
        {
            *dest = *src + 32;
        }
        src++;
        dest++;
    }
    *dest = '\0';


}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyToggle(arr, brr);

    printf("%s", brr);

    return 0;
}