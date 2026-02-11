import java.io.*;
import java.util.*;

class Program4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name:");
        String name = sobj.nextLine();

        FileReader fr = new FileReader(name);

        int ch = 0;
        int sum = 0;

        ch = fr.read();

        while(ch != -1)
        {
            sum = sum + ch;
            ch = fr.read();
        }
        System.out.println("Checksum = " + sum);

        fr.close();
        sobj.close();
    }
}
