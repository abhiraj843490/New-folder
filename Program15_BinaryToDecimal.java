/*Write the bin2Dec (string binary String) method to convert a binary string into a decimal number. 
Implement the bin2Dec method to throw a NumberFormatException if the string is not a binary 
string. */
import java.util.Scanner;
public class Program15_BinaryToDecimal {
    public static void main(String[]args){
        Scanner input =new Scanner(System.in);
        
        System.out.print("Please enter binary number:");
        String binaryNumber=input.next();//cannot read two words separated by space
        try {
            int decNumber=bin2Dec(binaryNumber);
            System.out.print("Dec num:"+decNumber);
        }
        catch(NumberFormatException ex){
            System.out.println("exception: "+ex.getMessage());
        }
    }
    public static int bin2Dec(String binaryNumber){ //throws NumberformatException bcz uncounted exception
        int result=0;
        for(int i=0;i<binaryNumber.length();i++){
            
            char currBinVal=binaryNumber.charAt(binaryNumber.length()-i-1);
            if(currBinVal!='0'&&currBinVal!='1')
                throw new NumberFormatException("Entered string in not a binary number.");
            
            else if(currBinVal=='1')
                result=result+(int)Math.pow(2, i);
        }
        return result;
    }
}
