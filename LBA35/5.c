/*
    5. Write a program which accept one number from user and range of
    positions from user. Toggle all bits from that range.

    Input : 897 9 13
    Toggle all bits from position 9 to 13 of input number is 879
*/

#include <stdio.h>

int toggleBits(int num, int start, int end) {
    int mask = 0;

    for (int i = start; i <= end; i++) {
        mask |= (1 << i);
    }

    return num ^ mask;
}

int main() {
    int num, start, end;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the start and end positions (0-indexed): ");
    scanf("%d %d", &start, &end);

    int result = toggleBits(num, start, end);
    printf("Result: %d\n", result);

    return 0;
}