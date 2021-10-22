/* 
Write a program to find the user given number is odd or even number(Two way if-else-Simple if else).
*/

import java.util.Scanner;
class GivenNumberIsEvenOrOod
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter number : ");
int a=sc.nextInt();
if(a%2==0){
System.out.println("a is even");
}
else{
System.out.println("a is odd");
}
}
}
