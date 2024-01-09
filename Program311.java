import java.util.*;
import java.io.*;

class Program311
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the namne of file :");
        String FileName = sobj.nextLine();
        try
        {
            System.out.println("Enter the data that to want to wirte int th file ");
            String Data = sobj.nextLine();
                
            FileWriter fwobj = new FileWriter(FileName);

            
            fwobj.write(Data);
            fwobj.close();
        
        }
   
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }

}