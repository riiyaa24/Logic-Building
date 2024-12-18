/*
    5. Write a recursive program which accept number from user and return 
    reverse number.

    Input : 523
    Output : 325
*/

int Reverse(int iNo, int iRev)
{
    if (iNo == 0) 
    {
        return iRev; 
    }

    int iDigit = iNo % 10; 
    iRev = iRev * 10 + iDigit; 

    return ReverseHelper(iNo / 10, iRev);
}

int Reverse(int iNo) 
{
    if (iNo < 0) 
    {
        return -ReverseHelper(-iNo, 0); 
    }
    return ReverseHelper(iNo, 0); 
}

int main() 
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    int iRet = Reverse(iValue);
    printf("Reversed number is: %d\n", iRet);

    return 0;
}