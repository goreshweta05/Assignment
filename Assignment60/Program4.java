import java.io.File;
import java.util.Scanner;

class Program4 
{
    public static void main(String[] args) 
    {
        int i = 0;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String name = sc.nextLine();

        System.out.print("Enter extension: ");
        String ext = sc.nextLine();

        File dir = new File(name);

        if (dir.exists() && dir.isDirectory()) 
        {
            File[] files = dir.listFiles();

            for (i = 0; i < files.length; i++) 
            {
                if (files[i].isFile() && files[i].getName().endsWith(ext)) 
                {
                    System.out.println(files[i].getName());
                }
            }
        }
        else 
        {
            System.out.println("Directory not found!");
        }
    }
}
