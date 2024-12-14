/*
    2. Write a java program which accept string from user and return
    difference between frequency of small characters and capital 
    characters.

    Input : "MarvellouS"
    Output : 6(8-2)
 */
import java.util.*;

class StringDemo3
{
   public int CountDiff(String str)
   {
      int iCapital = 0, iSmall = 0;

      for(int i = 0; i < str.length(); i++)
      {
         char ch = str.charAt(i);
         if(ch >= 'A' && ch <= 'Z')
         {
            iCapital++;
         }

         else
         {
            iSmall++;
         }
      }
      return (iSmall - iCapital);
   }
}

class program3
{
   public static void main(String A[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter a string : ");
      String sInput = sobj.nextLine();

      StringDemo3 obj = new StringDemo3();
      int iDifference = obj.CountDiff(sInput);

      System.out.println("Difference of capital and small characters : "+iDifference);
   }
}