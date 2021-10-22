/*
Author: Abhiraj Kumar
Date:31-01-2021
Program Definition:
Write a test program that prompts the user to enter ten numbers, invoke a method to reverse the numbers, display the numbers.
File name: Program10_ReverseTheNumbers.java
 */
import java.util.Scanner;
public class Program10_ReverseTheNumbers {
     public static void main(String[] args)
    {
        int i;
       
        Scanner sc=new Scanner(System.in);  
        System.out.println("Enter the no. of elements which you want : ");
        int n = sc.nextInt();
         int[]a=new int[n];
       System.out.println("Enter numbers: ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sc.nextInt();            
        }       
        System.out.println("Reversed numbers: ");
       for(i=a.length-1;i>=0;i--)
       {
            System.out.print(a[i] + ", ");  
       }
    }
}
