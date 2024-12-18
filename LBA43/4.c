/*
    4. Write a recursive program which accept number from user and return 
    smallest digit.

    Input : 8793
    Output : 3
*/

int Min(int iNo)
{
    static int iMin = 9; 

    if (iNo == 0) 
    {
        return iMin; 
    }

    int iDigit = iNo % 10; 

    if (iDigit < iMin) 
    {
        iMin = iDigit; 
    }

    return Min(iNo / 10); 
}