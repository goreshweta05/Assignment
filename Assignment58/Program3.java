import java.io.*;
import java.util.*;

class Program3
{
    public static void main(String A[]) throws Exception
    {
        int iRet = 0;
        byte Buffer[] = new byte[1024];
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder: ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        
        if((fobj.exists()) && (fobj.isDirectory()))
        {
            int i = 0;
            File MarvellousObj = new File("Marvellous.txt");
            MarvellousObj.createNewFile();
            
            FileOutputStream foobj = new FileOutputStream(MarvellousObj);
            FileInputStream fiobj = null;

            System.out.println("Folder is present");
            
            File fArr[] = fobj.listFiles();
            
            System.out.println("Writing data of all files to Marvellous.txt...");
            
            for(i = 0; i < fArr.length; i++)
            {
                if(fArr[i].isFile())
                {
                    fiobj = new FileInputStream(fArr[i]);
                    
                    while((iRet = fiobj.read(Buffer)) != -1)
                    {
                        foobj.write(Buffer, 0, iRet);
                    }
                    
                    fiobj.close();
                }
            }
            
            foobj.close();
            System.out.println("Data written successfully");
        }
        else
        {
            System.out.println("There is no such folder");
        }
        
        sobj.close();
    }
}