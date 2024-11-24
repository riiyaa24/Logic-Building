/*
1. Write a program which displays ASCII table. Table contains symbol,
decimal, hexadecimal and octal representation of every member from
0 to 255.

*/
#include<stdio.h>

void DisplayASCII()
{
    for (int i = 0; i < 256; i++) 
    {
        if (i >= 32 && i <= 126) 
        { 
            printf("|   %c      |   %3d   |     0x%02X    |   %03o                  |\n", i, i, i, i);
        }
         
        else 
        { 
            printf("|   N/A    |   %3d   |     0x%02X    |   %03o                  |\n", i, i, i);
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}