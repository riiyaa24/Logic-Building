/*
    4. Write a java program which accept N numbers from user and accept
    one another number as NO, return index of last occurrence of that NO.

    Input : N : 6
            NO : 66
            Elements : 85 66 3 66 93 88
    Output : 66 76 88
 */

 import java.util.*;

 class Number4 {
     // Method to print all numbers greater than the given number
     void PrintGreater(int Arr[], int iNo) {
         System.out.println("Numbers greater than " + iNo + " are:");
         for (int num : Arr) {
             if (num > iNo) {
                 System.out.print(num + " ");
             }
         }
         System.out.println();
     }
 }
 
 public class program4 {
     public static void main(String[] args) {
         Scanner sobj = new Scanner(System.in);
 
         // Prompt the user to enter the number of elements
         System.out.println("Enter the number of elements:");
         int N = sobj.nextInt();
 
         // Create an array to hold the elements
         int[] Arr = new int[N];
 
         // Input the elements
         System.out.println("Enter the elements:");
         for (int i = 0; i < N; i++) {
             Arr[i] = sobj.nextInt();
         }
 
         // Prompt the user to enter the number to compare
         System.out.println("Enter the number to compare:");
         int iNo = sobj.nextInt();
 
         // Create an object of Number1 and print numbers greater than iNo
         Number4 obj = new Number4();
         obj.PrintGreater(Arr, iNo);
 
         // Close the scanner
         sobj.close();
     }
 }
 