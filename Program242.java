import java.util.*;

class Arithematic
{
    public int iValue1;
    public int iValue2;

    public Arithematic(int A , int B)
    {
        this.iValue1 = A;
        this.iValue2 = B;
    }

    public int Adddition()
    {
        int isum = 0;
        isum = this.iValue1 + this.iValue2;
        return isum;
    }
}

class Program242
{
   
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
      

        int ino1 = 0, ino2 = 0;
        int iAns = 0;

        System.out.println("first Number :");
        ino1 = sobj.nextInt();

        System.out.println("first Secomd :");
        ino2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(ino1,ino2);

        iAns = aobj.Adddition();
        System.out.println("Adddition of two number  :"+iAns);
        
    }
}