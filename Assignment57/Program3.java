import java.util.Scanner;
import java.io.*;

class Program3
{
    public static void main(String A[]) throws Exception
    {
        String dName = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the directory name: ");
        dName = sobj.nextLine();

        File fobj = new File(dName);

        if(fobj.mkdir())
        {
            System.out.println("Directory created..");
        }
        else
        {
            System.out.println("Directory already exists or failed");
        }
       sobj.close();
    }
}