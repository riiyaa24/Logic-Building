/*
1. Write a program which accept string from user and copy that
 characters of that string into another string in reverse order.

 Input : "Marvellous Python"
 Output  : "nohtyP suollevraM"
*/
#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *p = src;

    while(*p != '\0')
    {
        p++;
    }
    
    p--;

    while(p >= src)
    {
        printf("%c", *p);
        p--;
    }
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30]; 

    StrCpyRev(arr, brr);

    printf("%s", brr);

    return 0;
}