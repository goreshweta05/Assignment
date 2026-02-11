import java.io.*;
import java.util.*;

class Program5
{
    public static void main(String A[])
    {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter directory name:");
    String dir = sobj.nextLine();

    File fobj = new File(dir);

    if(fobj.exists() && fobj.isDirectory())
    {
        File list[] = fobj.listFiles();

        System.out.println("Files and sizes:");

        for(int i = 0; i < list.length; i++)
        {
            if(list[i].isFile())
            {
                System.out.println(list[i].getName() +"  Size: " + list[i].length() + " bytes");
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
