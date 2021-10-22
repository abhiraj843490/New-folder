/**
 *
 * @author ABHIRAJ
 */
import java.util.Scanner;
public class Program13_Expression {
    
    public static void main(String[] args){
        
        Scanner input= new Scanner(System.in);
        
        System.out.print("enter valid expr: ");
        String exp=input.nextLine();  //This method returns the line that was skipped
        
         System.out.print("Given expr: "+exp);
         double a=0;
         double b=0;
         double ans=0;
         char op='1';
         
         String[] oprnds = exp.split("[\\+\\-\\*\\/\\%]");
//split() method breaks a given string around matches of the given regular expression.
         a=Double.parseDouble(oprnds[0]);
         b=Double.parseDouble(oprnds[1]);
         op=exp.charAt(oprnds[0].length());
         switch(op){
             case'+':ans=a+b;
             break;
             case'-':ans=a-b;
             break;
             case'*':ans=a*b;
             break;
             case'/':ans=a/b;
             break;
             case'%':ans=a%b;;
             break;
             
         }
         System.out.println("ans: "+ans);
    }
}
