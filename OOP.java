import java.util.*;
class OOP
{

    public static void main (String arg[])
    {
        int No1 = 0, No2 = 0, Ans = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter first number :");
        No1 = sobj.nextInt();
        System.out.println("enter second number :");
        No2 = sobj.nextInt();
        
        Arithmatic aobj = new Arithmatic(No1,No2);
        Ans = aobj.Addition();
        System.out.println("Addition is :"+Ans);

        Ans = aobj.substraction();
        System.out.println("substraction is :"+Ans);

    }
   
}
class Arithmatic
 {
 public int value1 ;
 public int value2 ;

    public Arithmatic (int A, int B)
    {
        this.value1 = A;
        this.value2 = B;

    }

    public int Addition ()
    {
        int result = 0;
        result = this.value1 + this.value2;
        return result;

    }
     public int substraction ()
    {
        int result = 0;
        result = this.value1 - this.value2;
        return result;
        
    }
    
    
    
}
