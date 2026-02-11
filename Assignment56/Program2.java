
import java.io.*;
import java.util.*;

class Program2
{
public static void main(String A[]) throws Exception
{
        String FileName = null;
        int i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name:");
        FileName = sobj.nextLine();

        FileReader frobj = new FileReader(FileName);

        System.out.println("File contents:");

        while((i = frobj.read()) != -1)
        {
           System.out.print((char)i);
        }

        frobj.close();
        sobj.close();
    }
}
