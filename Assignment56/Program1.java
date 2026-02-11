import java.io.*;
import java.util.*;

class Program1
{
    public static void main(String A[]) throws Exception
    {
        String FileName = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name:");
        FileName = sobj.nextLine();

        FileReader frobj = new FileReader(FileName);

        System.out.println("File opened successfully");

        frobj.close();
        sobj.close();
    }
}
