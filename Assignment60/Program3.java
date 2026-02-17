import java.io.File;
import java.util.Scanner;

class Program3
{
    public static void main(String A[]) 
    {
        int i = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter directory name: ");
        String name = sc.nextLine();

        File dir = new File(name);

        if(dir.exists() && dir.isDirectory()) 
        {
            File[] files = dir.listFiles();
            File smallestFile = null;

            for(i = 0; i < files.length; i++)
            {
                if(files[i].isFile()) 
                {
                    if (smallestFile == null || files[i].length() < smallestFile.length())
                    {
                        smallestFile = files[i];
                    }
                }
            }
            if (smallestFile != null)
            {
                System.out.println("Smallest file: " + smallestFile.getName());
            }
        }
        else 
        {
            System.out.println("Directory not found!");
        }
    }
}
