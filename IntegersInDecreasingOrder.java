/* 
Author: Abhiraj Kumar
Date:31-01-2021
Program Definition: Write a program that prompts the user to enter three integers and display the integers in decreasing order.
File name: Program5_DecreasingOrder.java

*/

import java.util.Scanner;
class IntegersInDecreasingOrder
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter three numbers : ");
int a=sc.nextInt();
int b=sc.nextInt();
int c=sc.nextInt();
System.out.println("1st integer numbers :" + a);
System.out.println("2nd integer numbers :" + b);
System.out.println("3rd integer numbers :" + c);
if(a>b && b>c){
System.out.println(a+ " > " +b+ " > " +c);
}
else if(a>c && c>b){
System.out.println(a+ " > " +c+ " > " +b);
}
else if(b>a && a>c){
System.out.println(b+ " > " +a+ " > " +c);
}
else if(b>c && c>a){
System.out.println(b+ " > " +c+ " > " +a);
}
else if(c>b && b>a){
System.out.println(c+ " > " +b+ " > " +a);
}
else{
System.out.println(c+ " > " +a+ " > " +b);
}
}
}
