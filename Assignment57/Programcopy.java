import java.io.*;
import java.util.*;

class Program1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name:");
        String src = sobj.nextLine();

        System.out.println("Enter destination file name:");
        String dest = sobj.nextLine();

        FileReader fr = new FileReader(src);
        FileWriter fw = new FileWriter(dest);

        int ch = fr.read();

        while(ch != -1)
        {
            fw.write(ch);
            ch = fr.read();
        }

        System.out.println("File copied successfully");

        fr.close();
        fw.close();
        sobj.close();
    }
}
