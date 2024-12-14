/*
    4. Write a program which accept number from user and return 
    multiplication of all digits.

    Input : 2395
    Output : 270

    Input : 1018 
    Output : 8

    Input : 9440
    Output : 144

    Input : 922432
    Output : 864
 */

 import java.util.*;

 class Digit4
 {
     public int Multiply(int iNo)
     {
         int iDigit = 0, iRes = 1;
 
         if(iNo < 0)
         {
             iNo = -iNo;
         }
         
         while(iNo != 0)
         {
             iDigit = iNo % 10;
             if(iDigit != 0)
             {
                 iRes = iRes * iDigit;
             }
             iNo = iNo/10;
         }
         return iRes;
     }
 }
 
 class program4
 {
     public static void main(String A[])
     {
         Scanner sobj = new Scanner(System.in);
 
         System.out.println("Enter the number : ");
         int iNo = 0, iRet = 0;
         iNo = sobj.nextInt();
 
         Digit4 dobj = new Digit4();
         iRet = dobj.Multiply(iNo);
 
         System.out.println("The number of even digits are : "+iRet);
     }
 }