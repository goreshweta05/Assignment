import java.io.*;
import java.util.*;

class Program1
{
    public static void main(String A[]) throws Exception
    {
        String src = null;
        String dest = null;

        Scanner sc = new Scanner(System.in);

        System.out.print("Source file: ");
        src = sc.nextLine();

        System.out.print("Destination file: ");
        dest = sc.nextLine();

        FileInputStream fiobj = new FileInputStream(src);
        FileOutputStream foobj = new FileOutputStream(dest);

        while(fiobj.available() > 0)
        {
            int ch = fiobj.read();
            foobj.write(ch);
        }

        fiobj.close();
        foobj.close();

        System.out.println("Copy completed");
    }
}
