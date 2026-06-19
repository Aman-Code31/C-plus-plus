import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class question {
    public static void main(String[] args) {
        try {
            // Source file
            FileInputStream fin = new FileInputStream("input.txt");

            // Destination file
            FileOutputStream fout = new FileOutputStream("output.txt");

            int i;
            // Read byte by byte and write to output file
            while ((i = fin.read()) != -1) {
                fout.write(i);
            }

            System.out.println("File copied successfully!");

            fin.close();
            fout.close();
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}