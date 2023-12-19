import java.util.*;

class Program240
{
    public static int Adddition( int iValue1 , int iValue2)
    {
        int isum = 0;
        isum = iValue1 + iValue2;
        return isum;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ino1 = 0, ino2 = 0;
        int iAns = 0;

        System.out.println("first Number :");
        ino1 = sobj.nextInt();

        System.out.println("first Secomd :");
        ino2 = sobj.nextInt();

        iAns = Adddition(ino1 , ino2);
        System.out.println("Adddition of two number  :"+iAns);
        
    }
}