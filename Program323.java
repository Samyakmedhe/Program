import java.util.*;
import java.io.*;

class Program323
{
    public static void main(String Arg[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);
       boolean bret = false;
       System.out.println("Enter the Name of the Directory :");
       String DirectoryName = sobj.nextLine();

       System.out.println("Enter the name of Packed file that you want to create :");
       String PackedFile = sobj.nextLine();

       File fobjPack = new File(PackedFile);
       
        bret = fobjPack.createNewFile();
         if(bret == false)
         {
            System.out.println("Unable to create ");
            return;
         }
       
       File fobj = new File(DirectoryName);

       bret = fobj.isDirectory();
       if(bret == true)
       {
         System.out.println("Directory is present");
          
         File Arr[] = fobj.listFiles();
         System.out.println("NUmber of files in the directory are :"+Arr.length);

         String Header = null; 
           
      for(int i = 0; i < Arr.length;i++)
      {
         Header = Arr[i].getName() + " " + Arr[i].length();

         for(int j = Header.length(); j < 100; j++)
         {
            Header = Header + " ";
         }
         System.out.println("Header is : "+Header);
         System.out.println("Header length is : "+Header.length());
       
      }   
       }
       else
       {
            System.out.println("there is no such Directory ");
       }
       
    }

}