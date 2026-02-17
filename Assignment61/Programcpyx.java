import java.io.*;
import java.util.*;

class Program2
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

        byte arr[] = new byte[1024];

        while(fiobj.available() > 0)
        {
            int count = fiobj.read(arr);
            foobj.write(arr, 0, count);
        }

        fiobj.close();
        foobj.close();

        System.out.println("Buffer copy done successfully");
    }
}
