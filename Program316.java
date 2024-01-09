import java.util.*;
import java.io.*;

class Program316
{
    public static void main(String Arg[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the Name of the source of file which is existing :");
       String sourceFile = sobj.nextLine();

       System.out.println("Enter the Name of Destination file which is existing :");
       String DestFile = sobj.nextLine();
       
       File fobj = new File(sourceFile);
       if(! fobj.exists())
        {
            System.out.println("Source file is not existing...");
            return;
        }

       File fobj1 = new File(DestFile);
       fobj.createNewFile();

       FileInputStream fiobj = new FileInputStream(sourceFile);
       FileOutputStream foobj = new FileOutputStream(DestFile);

       byte Buffer[] = new byte[1024];
       int iRet = 0;

       while((iRet = fiobj.read(Buffer))!= -1)
       {
            foobj.write(Buffer,0,iRet);
       } 
       fiobj.close();
       foobj.close();

    }

}