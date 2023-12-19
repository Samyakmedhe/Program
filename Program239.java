import java.io.*;

class Program239
{
    public static void main(String Arg[]) throws Exception
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));


        int ino = 0, ino2 = 0;
        int iAns = 0;

        System.out.println("first Number :");
        ino = Integer.parseInt(bobj.readLine());

        System.out.println("first Secomd :");
        ino2 = Integer.parseInt(bobj.readLine());

        iAns = ino + ino2;
        System.out.println("Adddition of two number  :"+iAns);
        
    }
}