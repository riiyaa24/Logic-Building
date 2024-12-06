/*
    4. Write a program which accept one number, two positions from user and
    check whether bit at first or bit at second position is ON or OFF.

    Input : 10  3   7
    Output : TRUE
*/

#include <stdio.h>

int isBitSet(int num, int pos) {
    return (num & (1 << pos)) != 0;
}

int main() {
    int num, pos1, pos2;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter two positions (0-indexed): ");
    scanf("%d %d", &pos1, &pos2);

    if (isBitSet(num, pos1) && isBitSet(num, pos2)) {
        printf("Both bits at positions %d and %d are ON.\n", pos1, pos2);
    } else {
        printf("At least one bit is OFF.\n");
    }

    return 0;
}