/*
 Author: Abhiraj Kumar
Date:16-01-2021
Program Definition:
Write a program to assign a grade based on given marks by user
File name: Program6_VowelOrConsonent.java
*/
/*Write a program to assign a grade based on given marks by user*/

import java.util.Scanner;
public class GradeBasedMarks
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter marks : ");
int marks=sc.nextInt();
System.out.print("The student Grade is: ");
if(marks>=80)
{
System.out.println("A");
}
else if(marks>=60 && marks<80)
{
System.out.println("B");
} 
else if(marks>=40 && marks<60)
{
System.out.println("C");
}
else
{
System.out.println("D");
}
}
}
