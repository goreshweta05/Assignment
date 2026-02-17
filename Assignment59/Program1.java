import java.io.File;
import java.util.Scanner;

class Program1 
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
            String[] list = dir.list();

            for (i = 0; i < list.length; i++) 
            {
                System.out.println(list[i]);
            }
        } 
        else
        {
            System.out.println("Directory not found!");
        }
    }
}
