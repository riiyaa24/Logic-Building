/*
    1. Write a java program which accept N numbers from user and accept
    one another number as NO, check whether NO is present or not.

    Input : N : 6
            NO : 66
            Elements : 85 66 3 66 93 88
    Output : TRUE

    Input : N : 6
            NO : 12
            Elements : 85 11 3 15 11 111
    Output : FALSE
 */
import java.util.*;

class Number1
{
    boolean Check(int Arr[], int iNo)
    {
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == iNo)
            {
                return true;
            }
        }
        return false;
    }
}

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iNum = 0;
        iNum = sobj.nextInt();

        int Arr[] = new int[iNum];

        System.out.println("Enter the elements : ");
        for(int i = 0; i < iNum; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Enter the number to check : ");
        int iNo = sobj.nextInt();

        Number1 nobj = new Number1();
        boolean bRet = false;
        bRet = nobj.Check(Arr, iNo);

        if(bRet == true)
        {
            System.out.println("Number is present");
        }
        else
        {
            System.out.println("Number is not present");
        }
    }
}