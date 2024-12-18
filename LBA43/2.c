/*
    2. Write a recursive program which accept string from user and return 
    largest digit.

    Input : 87983
    Output : 9
*/

int Max(int iNo)
{
    static int iMax = 0; 

    if (iNo == 0) 
    {
        return iMax; 
    }

    int iDigit = iNo % 10; 

    if (iDigit > iMax) 
    {
        iMax = iDigit; 
    }

    return Max(iNo / 10); 
}