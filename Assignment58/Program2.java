import java.util.Scanner;
import java.io.*;

class Program2
{
    public static void main(String A[]) throws Exception
    {
        String FolderName = null;
        int i = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter folder name:");
        FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        
        if((fobj.exists()) && (fobj.isDirectory()))
        {
        System.out.println("Folder is present");
        
        File fArr[] = fobj.listFiles();
        
        File MarvellousObj = new File("Marvellous.txt");
        MarvellousObj.createNewFile();
        
        FileWriter fwobj = new FileWriter(MarvellousObj);
        
        System.out.println("Writing file names to Marvellous.txt...");
        
        for(i = 0; i < fArr.length; i++)
        {
            if(fArr[i].isFile())
            {
                fwobj.write(fArr[i].getName() + "\n");
            }
        }
        
        fwobj.close();
        System.out.println("File names written successfully");
        }
        else
       {
          System.out.println("There is no such folder");
       }
    
       sobj.close();
}
}
