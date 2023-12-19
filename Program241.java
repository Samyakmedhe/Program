import java.util.*;

class Arithematic
{
    public int Adddition( int iValue1 , int iValue2)
    {
        int isum = 0;
        isum = iValue1 + iValue2;
        return isum;
    }
}

class Program241
{
   
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        int ino1 = 0, ino2 = 0;
        int iAns = 0;

        System.out.println("first Number :");
        ino1 = sobj.nextInt();

        System.out.println("first Secomd :");
        ino2 = sobj.nextInt();

        iAns = aobj.Adddition(ino1 , ino2);
        System.out.println("Adddition of two number  :"+iAns);
        
    }
}