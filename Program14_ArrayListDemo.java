
/**
 Write a program that creates an Array 
List and adds a Loan object , a Date object , a string, and a 
Circle object to the list, and use a loop to display all elements 
in the list by invoking the object’s to String() method.
 * @author ABHIRAJ
 */
import java.util.ArrayList;
import java.util.Date;
public class Program14_ArrayListDemo {
    
    public static void main(String[] args){
        ArrayList list = new ArrayList();
        Loan loanAcc=new Loan(1,"Deep",48,8.6f);
        list.add(loanAcc);
        Date currDate=new Date();
        list.add(currDate);
        String str="this is just a description";
        list.add(str);
        MyCircleClass circle=new MyCircleClass(10);
        list.add(circle);
        MyCircleClass circle1=new MyCircleClass(4);
        list.add(circle1);
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }
        
    }
}
class Loan{
    private int accNumber;
    private String accHolderName;
    private int tenure;
    private float intRate;
    
    public Loan(int accNumber, String accHolderName,int tenure, float intRate)
    {
    this.accNumber=accNumber;
    this.accHolderName=accHolderName;
    this.tenure=tenure;
    this.intRate=intRate;
}

    public int getAccNumber() {
        return accNumber;
    }

    public String getAccHolderName() {
        return accHolderName;
    }

    public int getTenure() {
        return tenure;
    }

    public float getIntRate() {
        return intRate;
    }

    public void setAccNumber(int accNumber) {
        this.accNumber = accNumber;
    }

    public void setAccHolderName(String accHolderName) {
        this.accHolderName = accHolderName;
    }

    public void setTenure(int tenure) {
        this.tenure = tenure;
    }

    public void setIntRate(float intRate) {
        this.intRate = intRate;
    }
}
    class MyCircleClass{
        private double radius;
        MyCircleClass(double radius){
            this.radius=radius;
        }
        public double getRadius(){
            return radius;
        }
        public void setRadius(double radius){
            this.radius=radius;
            
        }
        public double area(){
            return Math.PI*radius*radius;
            
        }
        public String toString(){
            String str="Circle Details: Radius: "+getRadius()+", Area: "+area();
       return str;
        }
        
    }
    


 

