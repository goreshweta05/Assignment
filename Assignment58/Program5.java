import java.io.*;
import java.util.*;

class Program5
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name:");
        String dirname = sobj.nextLine();

        File folder = new File(dirname);

        if(folder.exists() && folder.isDirectory())
        {
            FileWriter fw = new FileWriter("marvellous2.txt");

            File files[] = folder.listFiles();

            for(int i = 0; i < files.length; i++)
            {
                if(files[i].isFile() && files[i].getName().endsWith(".txt"))
                {
                    fw.write("File Name : " + files[i].getName() + "\n");
                    fw.write("File Size : " + files[i].length() + " bytes\n");

                    BufferedReader br = new BufferedReader(new FileReader(files[i]));

                    String line;

                    while((line = br.readLine()) != null)
                    {
                        fw.write(line + "\n");
                    }

                    br.close();

                    fw.write("\n---------------------------------------------------\n\n");
                }
            }

            fw.close();

            System.out.println("Data written successfully.");
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}
