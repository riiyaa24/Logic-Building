/*
    1. Write a java program which accept N numbers from user and return 
    difference between summation of even elements and summation of odd
    elements.

    Input : N 6
        Elements : 85   66  3   80  93  88
    Output : 53 (234-181)
 */
import java.util.*;

class ArrayDemo1
{
    public int Difference(int Arr[])
    {
        int iEvenSum = 0, iOddSum = 0;

        for(int i = 0; i <= Arr.length-1; i++)
        {
            if((Arr[i] % 2) == 0)
            {
                iEvenSum = iEvenSum + Arr[i];
            }
            else
            {
                iOddSum = iOddSum + Arr[i];
            }
        }

        return iEvenSum - iOddSum;
    }
}

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iNo = 0;

       iNo= sobj.nextInt();

        int Arr[] = new int[iNo];

        System.out.println("Enter the elements : ");
        for(int i = 0; i < iNo; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        ArrayDemo1 dobj = new ArrayDemo1();
        int result = dobj.Difference(Arr);

        System.out.println("Difference between summation of even and odd elements : "+result);

    }
}