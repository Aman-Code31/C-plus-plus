class CookingTask extends Thread{
    private String task;
    CookingTask(String task){
        this.task = task;            // VERY Important in EXAMS
    }
    public void run(){
        System.out.println(task + " is being prepared by " + Thread.currentThread().getName()+" with priority " + Thread.currentThread().getPriority());
    }
}

public class threading {
    public static void main(String[] args) {
        Thread t1 = new CookingTask("pasta");
        Thread t2 = new CookingTask("salad");
        Thread t3 = new CookingTask("Dessert");
        Thread t4 = new CookingTask("Rice");

        t1.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(Thread.NORM_PRIORITY);
        t3.setPriority(Thread.MAX_PRIORITY);

        t1.start();
        t2.start();
        t3.start();
        t4.start();
    }
}