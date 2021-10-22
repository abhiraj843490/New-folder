/*Write a recursive method that returns the smallest integer in an array. Write a test program that 
prompts the user to enter an integer and display its product.*/
import java.util.*;
public class Program22_MinMaxrRecurssion {
    // function to return maximum element using recursion
public static int findMaxRec(int A[], int n){
    if(n==1){
        return A[0];
    }
    return Math.max(A[n-1], findMaxRec(A,n-1));
}    
// function to return minimum element using recursion
public static int findMinRec(int A[],int n){
    if(n==1){
        return A[0];
    }
    return Math.min(A[n-1], findMinRec(A,n-1));
}
// Driver code
public static void main(String args[]){
    int A[]={100, 40, -54, 60, -50, 10,2};
    int n =A.length;
     System.out.println("Smallest number from array is : "+ findMinRec(A, n));
        System.out.println("Largest number from array is : "+ findMaxRec(A, n));
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an integer: ");
        int num = sc.nextInt();
        int product = 1;
        while (num != 0) {
            product = product * (num % 10);
            num = num / 10;
        }
        System.out.println("product of digits of a number is : "+ product);
    }
}
