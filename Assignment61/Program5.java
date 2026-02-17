import java.io.*;
import java.util.*;

class Program5
{
    public static void main(String A[]) throws Exception
    {
        int i = 0;
        String file = null;

        Scanner sobj = new Scanner(System.in);

        System.out.print("File name: ");
        file = sobj.nextLine();

        File fobj = new File(file);
        FileInputStream fiobj = new FileInputStream(fobj);

        byte data[] = new byte[(int)fobj.length()];
        fiobj.read(data);

        FileOutputStream File1 = new FileOutputStream("first.txt");
        FileOutputStream File2 = new FileOutputStream("second.txt");

        int mid = data.length / 2;
        
        while(i < mid)
        {
            File1.write(data[i]);
            i++;
        }

        while(i < data.length)
        {
            File2.write(data[i]);
            i++;
        }

        fiobj.close();
        File1.close();
        File2.close();

        System.out.println("File splited successfully");
    }
}
