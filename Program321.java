import java.util.*;
import java.io.*;

class Program321
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

         FileOutputStream fcombine = new FileOutputStream(PackedFile);
            int iRet = 0;
         byte Buffer[] = new byte[1024];
         for(int i = 0; i < Arr.length;i++)
          {
            FileInputStream fiobj = new FileInputStream(Arr[i]);
            while((iRet = fiobj.read(Buffer))!= -1)
            {
               fcombine.write(Buffer,0,iRet);
            }
            fiobj.close();
           
          }
          fcombine.close();
       }
       else
       {
            System.out.println("there is no such Directory ");
       }
       
    }

}