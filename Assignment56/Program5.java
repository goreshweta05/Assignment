import java.io.*;
import java.util.*;

class Program5
{
    public static void main(String A[]) throws Exception
    {
        String DirName = null;
        int i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory path:");
        DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists() == true && fobj.isDirectory() == true)
        {
            String fNames[] = fobj.list();

            System.out.println("Files in directory:");

            for(i = 0; i < fNames.length; i++)
            {
                System.out.println(fNames[i]);
            }
        }
        else
        {
            System.out.println("Invalid directory path");
        }

        sobj.close();
    }
}
