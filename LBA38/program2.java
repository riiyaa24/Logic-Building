/*
    2. Write a program which accept number from user and return the
    count of odd digits.

 */

 import java.util.*;

 class Digit2
 {
     public int CountEven(int iNo)
     {
         int iDigit = 0, iCnt = 0;
 
         if(iNo < 0)
         {
             iNo = -iNo;
         }
         
         while(iNo != 0)
         {
             iDigit = iNo % 10;
             if(iDigit%2 == 1)
             {
                 iCnt++;
             }
             iNo = iNo/10;
         }
         return iCnt;
     }
 }
 
 class program2
 {
     public static void main(String A[])
     {
         Scanner sobj = new Scanner(System.in);
 
         System.out.println("Enter the number : ");
         int iNo = 0, iRet = 0;
         iNo = sobj.nextInt();
 
         Digit2 dobj = new Digit2();
         iRet = dobj.CountEven(iNo);
 
         System.out.println("The number of even digits are : "+iRet);
     }
 }