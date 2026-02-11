import java.io.*;
import java.util.*;

class Program3
{
    public static void main(String A[]) throws Exception
    {
        String FileName = null;
        String fData = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name:");
        FileName = sobj.nextLine();

        System.out.println("Enter data to append:");
        fData = sobj.nextLine();

        FileWriter fwobj = new FileWriter(FileName, true);

        fwobj.write(fData + "\n");

        System.out.println("Data appended successfully");

        fwobj.close();
        sobj.close();
    }
}
