import java.util.*;
import java.io.*;

class Program309
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
        if(bRet == true)
        {
            System.out.println("File is Present");
        }
        else
        {
            System.out.println("there is no such File");
        }
       
    }
   
    catch(Exception obj)
    {
        System.out.println("Exception occured");
    }
    }

}