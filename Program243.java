import Marvellous.Arithematic;

import java.util.*;
class Program243
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