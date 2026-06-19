import java.io.FileWriter;
import java.io.IOException;
import java.io.File;
import java.io.FileNotFoundException;
public class write {

    public static void main(String[] args) {
        try {
            FileWriter Writer = new FileWriter("myFile.txt");
            Writer.write("Files in java are seriously good!");
            Writer.close();
            System.out.println("Successfully wrote to the file.");
        } catch (IOException e) {
            System.out.println("an error has occured");
            e.printStackTrace();
        }
    }
}
