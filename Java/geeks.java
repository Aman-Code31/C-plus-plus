import java.util.LinkedList;
public class geeks {
    public static void main(String args[]){
        LinkedList<String> l1 = new LinkedList<String>();
        l1.add("Geeks");
        l1.add("Geeks");
        l1.add(1,"for");

        for(int i = 0; i<l1.size(); i++){
            System.out.print(l1.get(i)+" ");
        }
        System.out.println();

        for(String s : l1){
            System.out.print(s+" ");
        }
        System.out.println("Intial linkedList"+l1);

        l1.remove(1);
        System.out.println("After removing element at index 1: "+l1);

        l1.remove("Geeks");
        System.out.println("After removing first occurrence of Geeks: "+l1);
    }
}
