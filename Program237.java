import java.util.*;

class Program237
{
    public static void main(String Arg[])
    {
        Scannner sobj = new Scannner(System.in);

        int ino = 0, ino2 = 0;
        int iAns = 0;

        System.out.println("first Number :");
        ino = sobj.nextInt();

        System.out.println("first Secomd :");
        ino2 = sobj.nextInt();

        iAns = ino + ino2;
        System.out.println("Adddition of two number  :"+iAns);
        
    }
}