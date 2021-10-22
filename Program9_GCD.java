/*
Author: Abhiraj Kumar
Date:27-01-2021
Program Definition:
Write a program that prompts the user to enter two integers and compute
the gcd of two integers.
File name: Program9_GCD.java
*/

import java.util.Scanner;
public class Program9_GCD {
    public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter two numbers : ");
int a=sc.nextInt();
int b=sc.nextInt();
System.out.println("integer numbers :" +a + " and " +b +" gcd is: "+ gcd(a,b));
}
static int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a % b);
    }
}

