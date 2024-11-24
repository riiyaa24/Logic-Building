/*
    1. Write a program which accept string from user and convert it into
    upper case

    Input : Marvellous Multi OS
    Output : MARVELLOUS MULTI OS
*/

#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    struprX(Arr);

    printf("String after updation is : %s\n", Arr);

    return 0;
}