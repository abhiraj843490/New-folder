/*
Author: Abhiraj Kumar
Date:31-01-2021
Program Definition: Assume a vehicle plate number consists of three uppercase 
letters followed by four digits. Write a program
to generate a plate number.
File name: Program7_PlateNumber.java
 */
import java.util.Scanner;
public class Program7_PlateNumber {
    public static void main(String[] args){
        int letter1 = 65 +(int)(Math.random() * 25);
        int letter2 = 65 +(int)(Math.random() * 25);
        int letter3 = 65 +(int)(Math.random() * 25);
        
        // Generate four random digite
        int number1 = (int)(Math.random()*10);
        int number2 = (int)(Math.random()*10);
        int number3 = (int)(Math.random()*10);
        int number4 = (int)(Math.random()*10);
        
        System.out.println("Number plate is "+(char)(letter1)+((char)(letter2))+
                ((char)(letter3))+" " + number1 + number2 + number3 + number4);
    }
}
