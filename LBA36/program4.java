/*
    2. Write a java program which accept string from user and check
    whether it contains vowels in it or not.

    Input : "marvellous"
    Output : true

    Input : "Demo"
    Output : true

    Input : "xyz"
    Output : false
 */
import java.util.*;

class StringDemo4
{
   public boolean Check(String str)
   {
      for(int i = 0; i < str.length(); i++)
      {
         char ch = str.charAt(i);
         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
         {
            return true;
         }
      }
      return false;
   }
}

class program4
{
   public static void main(String Arr[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter a string : ");
      String sInput = sobj.nextLine();

      StringDemo4 obj = new StringDemo4();
      boolean bVowels = obj.Check(sInput);

      if(bVowels == true)
      {
         System.out.println("Vowels Presents");
      }
      else
      {
         System.out.println("Vowels Absent");
      }
   }
}