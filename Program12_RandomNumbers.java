/* int b/w 1 and 49 */
import java.util.Random;
public class Program12_RandomNumbers {
    public static void main(String[] args){
        Random random=new Random(1000);
        for(int i=1;i<=100;i++){
            //System.out.printf("%3d",random.nextInt(49)+1);
            System.out.print(" "+random.nextInt(49)+1);
            if(i%10==0)
                System.out.println();
        }
    }
}
