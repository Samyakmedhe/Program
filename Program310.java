import java.util.*;
import java.io.*;

class Program310
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the namne of file :");
        String FileName = sobj.nextLine();
    try
    {
        File fobj = new File(FileName);

        boolean bRet = false;
        bRet = fobj.exists();
        if(bRet)
        {
            System.out.println("Name of File is :"+fobj.getName());
            System.out.println("Absolute Path of File is :"+fobj.getAbsolutePath());
            System.out.println("File is :"+fobj.length());
            System.out.println("we can read from File is :"+fobj.canRead());
            System.out.println("we can write int the File is :"+fobj.canWrite());
        }
    }
   
    catch(Exception obj)
    {
        System.out.println("Exception occured");
    }
    }

}