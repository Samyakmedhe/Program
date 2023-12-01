import java.util.*;

class InputOutput
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

       System.out.println("enter first number :");
       int no1 = sobj.nextInt ();

        System.out.println("enter first number :");
        int no2 = sobj.nextInt ();
        
        int Ans = 0;
        Ans = no1 + no2;

        System.out.println("Addition is :"+Ans);
    }
}