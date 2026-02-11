import java.io.*;
import java.util.*;

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name:");
        String name = sobj.nextLine();

        File fobj = new File(name);

        if(fobj.exists() && fobj.isFile())
        {
            System.out.println("It is a regular file");
        }
        else
        {
            System.out.println("Not a regular file");
        }

        sobj.close();
    }
}
