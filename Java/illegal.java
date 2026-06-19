class DivideByZeroException extends RuntimeException{
    public DivideByZeroException(String m){
        super(m);
    }
}
public class illegal{
    public static void main(String[] args){
        try{
            int a = 10;
            int b = 0;
            if(b == 0){
                throw new DivideByZeroException("Division by zero is not allowed.");
            }
            int c = a / b;
        }
        catch(DivideByZeroException e){
            System.out.println("Caught exception: " + e.getMessage());
        }
    }
}