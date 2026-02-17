import java.io.File;
import java.util.Scanner;

class Program2
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
            File largest = null;

            for(i = 0; i < files.length; i++)
            {
                if(files[i].isFile()) 
                {
                    if (largest == null || files[i].length() > largest.length())
                    {
                        largest = files[i];
                    }
                }
            }
            if (largest != null)
            {
                System.out.println("Largest file: " + largest.getName());
            }
        }
        else 
        {
            System.out.println("Directory not found!");
        }
    }
}
