/*
    1. Write a program which accept one number from user and count number of
    ON (1) bits in it without using % and / operator

    Input : 11
    Output : 3
*/
#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int setBitCount = countSetBits(num);
    printf("Number of set bits: %d\n", setBitCount);

    return 0;
}