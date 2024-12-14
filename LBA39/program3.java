/*
    3. Write a java program which accept N numbers from user and accept
    one another number as NO, return index of last occurrence of that NO.

    Input : N : 6
            NO : 66
            Elements : 85 66 3 66 93 88
    Output : 3
 */

import java.util.*;

class Number3
{
     int LastOccurrence(int Arr[], int iNo) {
         int lastIndex = 0;
         for (int i = 0; i < Arr.length; i++) {
             if (Arr[i] == iNo) {
                 lastIndex = i;
             }
         }
         return lastIndex;
     }
 }
 
 public class program3 
 {
     public static void main(String[] args) {
         Scanner sobj = new Scanner(System.in);
 
         System.out.println("Enter the number of elements:");
         int N = sobj.nextInt();
 
      
         int[] Arr = new int[N];
 
       
         System.out.println("Enter the elements:");
         for (int i = 0; i < N; i++) {
             Arr[i] = sobj.nextInt();
         }

         System.out.println("Enter the number to find the last occurrence:");
         int iNo = sobj.nextInt();

         Number3 obj = new Number3();
         int lastIndex = obj.LastOccurrence(Arr, iNo);
 
        
         if (lastIndex != -1) {
             System.out.println("Last occurrence of the number is at index: " + lastIndex);
         } else {
             System.out.println("Number not found in the array.");
         }
     }
 }
 
