/*
    2. Write java program which accept N numbers from user and accept
    one another number as NO, return index of first occurrence of that
    NO.

    Input : N : 6
            NO : 66
            Elements : 85 66 3 66 93 88
    Output : 1

 */

import java.util.*;

class Number2
{
public int FirstOcc(int Arr[], int iNo)
    {
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == iNo)
            {
                return i;
            }
        }
        return -1;
    }
}

class program2
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

        Number2 nobj = new Number2();
        int iRet = 0;
        iRet = nobj.FirstOcc(Arr, iNo);

        if(iRet != -1)
        {
            System.out.println("Number is present at : "+iRet);
        }
        else
        {
            System.out.println("Number is not present");
        }
    }
}