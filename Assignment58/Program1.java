import java.io.*;
import java.util.*;

class Program1
{
    public static void main(String A[])
    {
        int i = 0;
        String dir = null;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name:");
        dir = sobj.nextLine();

        File fobj = new File(dir);

        if(fobj.exists() && fobj.isDirectory())
        {
            File list[] = fobj.listFiles();

            System.out.println("Regular files:");

            for(i = 0; i < list.length; i++)
            {
                if(list[i].isFile())
                {
                    System.out.println(list[i].getName());
                }
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }
        sobj.close();
    }
}
