import java.util.PriorityQueue;

public class Program24_MYPriorityQueue
{
     public static void main(String[] args) 
 {
  MyPriorityQueue<String> queue = new MyPriorityQueue<>();
         queue.offer("1");
         queue.offer("2");
         queue.offer("3");
         queue.offer("4");

         MyPriorityQueue<String> queue1 = null;
         try 
  {
              queue1 = (MyPriorityQueue<String>)(queue.clone()); //copy the content of queue by clone()
         } 
  catch (CloneNotSupportedException e) 
  {
              e.printStackTrace();
         }
         System.out.print(queue1);
     }

    static class MyPriorityQueue<E> extends PriorityQueue<E> implements Cloneable {

        @Override
        public Object clone() throws CloneNotSupportedException {
            MyPriorityQueue<E> clone = new MyPriorityQueue<>();
            this.forEach(clone::offer); // colon method is used COPY the content of one to another queue
                                         //colon by offer()func  copy the ele by ele in new queue
              return clone;
         }

     }
}

