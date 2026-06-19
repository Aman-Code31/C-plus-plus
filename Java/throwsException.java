public class throwsException{
    static void fun() throws IllegalAccessException,ArithmeticException{
        System.out.println("inside fun(). ");
        int a = 20;
        throw new IllegalAccessException("demo");
    }

    public static void main(String args[]){
        try {
        fun();  
        }
        catch(IllegalAccessException e){
            System.out.println("caught in main");
        }
    }
}
