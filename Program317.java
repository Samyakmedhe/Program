import java.util.*;
import java.io.*;

class Program317
{
    public static void main(String Arg[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the Name of the Directory :");
       String DirectoryName = sobj.nextLine();

       boolean bret = false;
       File fobj = new File(DirectoryName);

       bret = fobj.isDirectory();
       if(bret == true)
       {
            System.out.println("Directory is present");
       }
       else
       {
            System.out.println("there is no such Directory ");
       }
       
    }

}