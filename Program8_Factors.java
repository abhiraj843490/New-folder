/*
 Author: Abhiraj Kumar
Date:27-01-2021
Program Definition:
Write a program that reads an integer and displays all its smallest factors in
increasing order.
File name: Program8_Factors.java
 */
import java.util.Scanner;
public class Program8_Factors {
    public static void main(String[] args)
    {
        System.out.println("Enter value which you want:");
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        System.out.println("factors of "+a+" are: ");
        if(a==0||a==1){
            System.out.println("Don't have any factors of "+a+" ");
        }
            for(int i=2; a>1;){
            if(a%i==0)
            {
                System.out.println(i +" ");
                a=a/i;
            }
            else
            {
                i++;
            }
        }
       
    }
}
