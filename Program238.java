import java.io.*;

class Program238
{
    public static void main(String Arg[]) 
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));


        int ino = 0, ino2 = 0;
        int iAns = 0;

    try
      {  System.out.println("first Number :");
        ino = Integer.parseInt(bobj.readLine());

        System.out.println("first Secomd :");
        ino2 = Integer.parseInt(bobj.readLine());

        iAns = ino + ino2;
        System.out.println("Adddition of two number  :"+iAns);
      }
      catch(Exception eobj)
      {
        System.out.println("Exception Occured");

      }
    }
}