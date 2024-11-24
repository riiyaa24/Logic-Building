/*
    5. Accept division of student from user and depends on the division
    display exam timing. There are 4 divisions in school as A, B, C, D. Exam
    of division A at 7:30AM, B at 8:30AM, C at 9:20AM, D at 10:30AM. Application
    should be case sensitive

    Input : C
    Output : your exam is at 9:20am

    Input : d
    Output : Your exam is at 10:30am
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam is at 7:30AM");
    }

    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam is at 8:30AM");
    }

    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam is at 9:20AM");
    }
    
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam is at 10:30AM");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}