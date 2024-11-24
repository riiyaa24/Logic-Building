/*
    5. Write a program which accept string from user and display it in
    reverse order

    Input : "Marvellous"
    Output : "suollevraM"

*/

#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;

    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    printf("String after reversal : %s\n", Arr);

    return 0;
}