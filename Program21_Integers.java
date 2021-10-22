/*Write a program to create a file name 
123.txt, if it does not exist. Append a new data to it if it already 
exist. write 150 integers created randomly into the file using Text 
I/O. Integers are separated by space.
*/

import java.util.Scanner;
import java.io.*;
public class Program21_Integers {

    public static void main(String[] args) throws IOException {

        try(
                PrintWriter pw = new PrintWriter(new FileOutputStream("123.txt", true));) {
            for (int i = 0; i < 15; i++) {
                pw.print((int) (Math.random() * 15) + " ");
                
            }
        } catch (FileNotFoundException fnfe) {
            System.out.println("Cannot create the file.");
            fnfe.printStackTrace();
        }

    }

}