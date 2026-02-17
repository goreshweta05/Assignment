import java.io.*;
import java.util.*;

class Program3
{
    public static void main(String A[]) throws Exception
    {
        String file = null;
        String text = null;
        int i = 0;

        Scanner sc = new Scanner(System.in);

        System.out.print("File name: ");
        file = sc.nextLine();

        System.out.print("Text: ");
        text = sc.nextLine();

        FileWriter fobj = new FileWriter(file, true);

        while(i < text.length())
        {
            fobj.write(text.charAt(i));
            i++;
        }

        fobj.close();

        System.out.println("Text appended");
    }
}
