/*
    2. Write a java program which accept string from userband count
    number of small characters.

    Input : "Marvellous"
    Output : 9
 */
import java.util.*;

class StringDemo2
{
   public int CountSmall(String str)
   {
      int iSmall = 0;
      
      for(int i = 0; i < str.length(); i++)
      {
         char ch = str.charAt(i);
         if(ch >= 'a' && ch <= 'z')
         {
            iSmall++;
         }
      }
      return iSmall;
   }
}

class program2
{
   public static void main(String Arr[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter a string : ");
      String sInput = sobj.nextLine();

      StringDemo2 obj = new StringDemo2();
      int SmallCount = obj.CountSmall(sInput);

      System.out.println("Number of small characters : "+SmallCount);
   }
}