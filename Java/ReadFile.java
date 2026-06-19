import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
public class ReadFile {
    public static void main(String[] args) {
        // Code to read a file will go here
    try {
        File obj = new File("myFile.txt");
        Scanner reader = new Scanner(obj);

        while (reader.hasNextLine()){
            String data = reader.nextLine();
            System.out.println(data);
        }

    } catch (FileNotFoundException e) {
        System.out.println("An error occurred.");
        e.printStackTrace();
    }
    }
}
