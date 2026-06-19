public class MyException extends Exception{
    public MyException(String m){
        super(m);
    }
}

public class setText{
    public static void main(String[] args){
        try{
            throw new MyException("this is my custom exceptions message");
        }
        catch(MyException e){
            System.out.println("caught my exception " + e.getMessage());
        }
    }
}