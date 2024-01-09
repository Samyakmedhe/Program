import java.util.*;
import java.io.*;

class Program308
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

        bRet = fobj .createNewFile();

        if(bRet == true)
        {
            System.out.println("File gets Succesfullyy created...");
        }
        else
        {
            System.out.println("Unable to creat file..");
        }
    }
    catch(IOException obj)
    {

    }
    catch(Exception obj)
    {

    }
    }

}