import java.io.File;
import java.util.Scanner;

class Program4
{
    public static void main(String A[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter directory name: ");
        String name = sc.nextLine();

        File dir = new File(name);

        int i = 0;
        int fileCount = 0;
        int folderCount = 0;

        if (dir.exists() && dir.isDirectory()) 
        {
            File[] list = dir.listFiles();

            for (i = 0; i < list.length; i++) 
            {
                if(list[i].isFile())
                {
                  fileCount++;
                }
                else
                {
                  folderCount++;
                }    
            }
            System.out.println("Total files: " + fileCount);
            System.out.println("Total folders: " + folderCount);
        } 
        else 
        {
            System.out.println("Directory not found!");
        }
    }
}
