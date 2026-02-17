import java.io.File;
import java.util.Scanner;

class Program5
{
    public static void main(String A[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter file/directory name: ");
        String name = sc.nextLine();

        File fobj = new File(name);

        if (fobj.exists())
        {
            System.out.println("Path exists...");

            if(fobj.isFile())
            {
              System.out.println("It is a file.");
            }
            else
            {
               System.out.println("It is a directory.");
            }   
        }
        else
        {
            System.out.println("Path does not exist...");
        }
    }
}
