/*
    3. Write a program which accept number from user and return the
    count of digits in between 3 and 7.

    Input : 2395
    Output 1

    Input : 1018
    Output : 0

    Input : 4521
    Output 2

    Input : 9922
    Output : 0
 */

 import java.util.*;

 class Digit3
 {
     public int CountRange(int iNo)
     {
         int iDigit = 0, iCnt = 0;
 
         if(iNo < 0)
         {
             iNo = -iNo;
         }
         
         while(iNo != 0)
         {
             iDigit = iNo % 10;
             if(iDigit == 3 || iDigit == 4 || iDigit == 5 || iDigit == 6 || iDigit == 7)
             {
                 iCnt++;
             }
             iNo = iNo/10;
         }
         return iCnt;
     }
 }
 
 class program3
 {
     public static void main(String A[])
     {
         Scanner sobj = new Scanner(System.in);
 
         System.out.println("Enter the number : ");
         int iNo = 0, iRet = 0;
         iNo = sobj.nextInt();
 
         Digit3 dobj = new Digit3();
         iRet = dobj.CountRange(iNo);
 
         System.out.println("The number of digits between 3 and 7 are : "+iRet);
     }
 }