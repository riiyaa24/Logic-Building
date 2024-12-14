/*
    5. write a program which accept number from user and return 
    difference between summation of even digits and summation of odd
    digits.

    Input : 2395
    Output : -15(2-17)

    Input : 1018
    Output : 6(8-2)

    Input : 8440
    Output : 16 (16-0)

    Input : 5733
    Output : -18(0-18)
 */

import java.util.*;

class Digit5
{
    public int CountDiff(int iNo)
    {
        int iDigit = 0, iOddSum = 0, iEvenSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit%2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }
            iNo = iNo/10;
        }
        return iEvenSum - iOddSum;
    }
}

class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = 0, iRet = 0;
        iNo = sobj.nextInt();

        Digit5 dobj = new Digit5();
        iRet = dobj.CountDiff(iNo);

        System.out.println("The difference between summation of even and odd is : "+iRet);
    }
}