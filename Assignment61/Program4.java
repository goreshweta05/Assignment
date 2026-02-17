import java.io.*;
import java.util.*;

class Program4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("First file: ");
        String File1 = sc.nextLine();

        System.out.print("Second file: ");
        String File2 = sc.nextLine();

        System.out.print("Output file: ");
        String File3 = sc.nextLine();

        FileInputStream fiobj1 = new FileInputStream(File1);
        FileInputStream fiobj2 = new FileInputStream(File2);
        FileOutputStream foobj = new FileOutputStream(File3);

        while(fiobj1.available() > 0)
        {
            foobj.write(fiobj1.read());
        }

        while(fiobj2.available() > 0)
        {
            foobj.write(fiobj2.read());
        }

        fiobj1.close();
        fiobj2.close();
        foobj.close();

        System.out.println("Files merged");
    }
}
