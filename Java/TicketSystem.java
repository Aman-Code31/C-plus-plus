class TicketBooking implements Runnable{
    @Override
    public void run(){
        try{
            Thread.sleep(200);
        }catch(InterruptedException e){
            e.printStackTrace();
        }

        System.out.println("State of bookingThread while mainThread is waiting: " + 
        TicketSystem.mainThread.getState());

        try {
            Thread.sleep(200);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

public class TicketSystem implements Runnable{
    public static Thread mainThread;
    public static TicketSystem ticketSystem;

    @Override

    public void run(){
        TicketBooking booking = new TicketBooking();
        Thread bookingThread = new Thread(booking);

        System.out.println("state after creating bookingTicket:" + bookingThread.getState());
    }
}