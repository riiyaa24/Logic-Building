/*
    5. Write a java program which accept N numbers from user and return
    product of all odd elements.

    Input : N : 6
            Elements : 15   66      3    70  10  88
 */

 import java.util.*;

 class Number5 {
     // Method to return the product of all odd numbers
     int productOfOddNumbers(int Arr[]) {
         int product = 1;
         boolean oddFound = false;
 
         for (int num : Arr) {
             if (num % 2 != 0) { // Check if the number is odd
                 product *= num;
                 oddFound = true;
             }
         }
 
         if (oddFound) {
             return product;
         } else {
             return 0; // Return 0 if no odd numbers are found
         }
     }
 }
 
 public class program5 {
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
 
         // Create an object of Number5 and get the product of odd numbers
         Number5 obj = new Number5();
         int product = obj.productOfOddNumbers(Arr);
 
         // Output the result
         if (product != 0) {
             System.out.println("Product of all odd elements: " + product);
         } else {
             System.out.println("No odd elements found.");
         }
 
         // Close the scanner
         sobj.close();
     }
 }
 