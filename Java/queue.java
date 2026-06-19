import java.util.PriorityQueue;
import java.util.Queue;
import java.util.*;

public class queue {
    public static void main(String [] args){
        Queue <Integer> q = new PriorityQueue<>();
        q.add(10);
        q.add(20);
        q.add(15);

        System.out.println("priority queue elements: " + q);

        q.remove("20");
        System.out.println("after removing 20: " + q);

        q.peek();
        System.out.println("head element: " + q);

        Iterator iterator = q.iterator();

        while(iterator.hasNext()){
            System.out.println("elements: " + iterator.next());
        }
    }
}
