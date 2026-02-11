import java.io.*;
import java.util.*;

class Program4
{
    public static void main(String A[]) throws Exception
    {
        boolean bRet = false;
        String FileName = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name:");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        bRet = fobj.exists();

        if(bRet == true)
        {
            System.out.println("File already exists");
        }
        else
        {
            fobj.createNewFile();
            System.out.println("File created successfully");
        }
        sobj.close();
      
    }
}
