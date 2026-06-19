import java.util.*;
import java.util.Collections;
public class Main {
    public static void main(String []args){
        List <String> list = new ArrayList<>();

        list.add("java");
        list.add("python");
        list.add("c++");
        System.out.println("Languages: " + list);
        for(String lang : list){
            System.out.println("I love " + lang);
        }

        Collections.sort(list);
        System.out.println("Sorted Languages: " + list);
        
    }
}
