/*
Author: Abhiraj Kumar
Date:16-01-2021
Program Definition:
Write a program that prompts the user to enter a letter and check whether a letter is a vowel or constant.
File name: Program6_VowelOrConsonent.java
*/
import java.util.Scanner;
class Program6_VowelOrConsonent
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter alphabet:");
        String str = sc.next();
        char ch = str.charAt(0);
        switch(ch)
        {
            case 'a'|'A':
            case 'e'|'E':
            case 'i'|'I':
            case 'o'|'O':
            case 'u'|'U':
          System.out.println("Entered alphabet is a Vowel");
          break;
            default:
                System.out.println("Entered alphabet is a Consonent");
            }
    }
}