/*
    2. Write a java program which accept N numbers from user and display 
    all such elements which are divisible by 5.

    Input : N 6
        Elements : 85   66  3   80  93  88
    Output : 85 80
*/

import java.util.*;

class ArrayDemo2
{
    public void Display(int Arr[])
    {
        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i]%5) == 0)
            {
                System.out.println(Arr[i]);
            }
        }
    }
}

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        System.out.println("Enter the number of elements : ");
        iNo = sobj.nextInt();

        int Arr[] = new int[iNo];

        System.out.println("Enter the elements : ");
        for(int i = 0; i < iNo; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        ArrayDemo2 aobj = new ArrayDemo2();
        aobj.Display(Arr);

    }
}