/*
    5.  Write a java program which accept string from userband count
    number of small characters.

    Input : "MarvellouS"
    Output : "SuollevraM"
 */
import java.util.*;

class StringDemo5
{
   public String Reverse(String str)
   {
      int smallCount = 0;

      char reversedArr[] = new char[str.length()];

      for(int i = str.length() - 1, j = 0; i >= 0; i--, j++)
      {
         char ch = str.charAt(i);

         reversedArr[j] = ch;
      }

      return new String(reversedArr);
   }
}

class program5
{
   public static void main(String A[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter a string : ");
      String sInput = sobj.nextLine();

      StringDemo5 obj = new StringDemo5();
      String reversed = obj.Reverse(sInput);

      System.out.println("Reverse string : "+reversed);
   }
}