import java.util.*;
public class sett {
    public static void main(String[] args) {
        HashSet<Integer> set = new HashSet<>();
        set.add(1);
        set.add(2);
        set.add(1);
        set.add(3);
        set.add(4);
        set.add(5);

        set.remove(5);

        System.out.println("HashSet: " + set);
        System.out.println(set.size());
        System.out.println(set.remove(1));
        System.out.println(set);

        System.out.println("Iterating through set:");
        Iterator<Integer> iterator = set.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
        for (Integer i : set) {
            System.out.println(i);
        }

    }
}