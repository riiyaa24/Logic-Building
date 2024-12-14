/*
    1. Write a java program which accept string from user and count
    number of capital characters.

    Input : "Marvellous Multi OS"

    Output : 4
*/
import java.util.*;

class StringDemo1
{
    public int CountCapital(String str)
    {
        int iCount = 0;

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch >= 'A' && ch <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;      
    }
}

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String sInp;

        System.out.println("Enter a string : ");
        sInp = sobj.nextLine();

        StringDemo1 obj = new StringDemo1();
        int iCap = 0;

        iCap = obj.CountCapital(sInp);

        System.out.println("Number of capital characters : "+iCap);
    }
}