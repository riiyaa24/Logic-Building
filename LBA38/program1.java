/*
    1. Write a java program which accept number from user and return the
    count of even digits.

    Input : 2395
    Output : 1

    Input : 1018
    Output : 2

    Input : -1018
    Output : 2

    Input : 8462
    Output : 4

 */
import java.util.*;

class Digit1
{
    public int CountEven(int iNo)
    {
        int iDigit = 0, iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit%2 == 0)
            {
                iCnt++;
            }
            iNo = iNo/10;
        }
        return iCnt;
    }
}

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = 0, iRet = 0;
        iNo = sobj.nextInt();

        Digit1 dobj = new Digit1();
        iRet = dobj.CountEven(iNo);

        System.out.println("The number of odd digits are : "+iRet);
    }
}