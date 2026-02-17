import java.io.File;
import java.util.Scanner;

class Program5
 {
    public static void main(String A[]) 
    {
        int i = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter directory name: ");
        String name = sc.nextLine();

        File dir = new File(name);

        if (dir.exists() && dir.isDirectory()) 
        {
            File[] list = dir.listFiles();

            for (i = 0; i < list.length; i++) 
            {
                System.out.println( list[i].getName() + " -> " + list[i].getAbsolutePath());
            }
        } 
        else 
        {
            System.out.println("Directory not found!");
        }
    }
}
