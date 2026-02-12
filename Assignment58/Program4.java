import java.io.*;
import java.util.*;

class Program4
{
    public static void main(String A[])
    {
        int i = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name:");
        String dirname = sobj.nextLine();

        File folder = new File(dirname);

        if(folder.exists() && folder.isDirectory())
        {
            try
            {
                FileWriter fw = new FileWriter("marvellous1.txt");

                File files[] = folder.listFiles();

                for(i = 0; i < files.length; i++) 
                {
                    if(files[i].isFile())
                    {
                        fw.write("File Name: " + files[i].getName() + "\n");

                        BufferedReader br = new BufferedReader(new FileReader(files[i]));

                        String line;

                        while((line = br.readLine()) != null)
                        {
                            fw.write(line + "\n");
                        }

                        fw.write("\n_______________________________________________________________\n\n");
                        br.close();
                    }
                }

                fw.close();
                System.out.println("Data written into marvellous1.txt");
            }
            catch(Exception e)
            {
                System.out.println("Error: " + e);
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}
