import java.util.*;

class Program277
{
    public static int ToggleBit(int iNo)
    {
        int iMask = 0X0000040;
        int iResult = 0;

        iResult = iNo ^ iMask;

        return iResult;
        
    }
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
       int iRet = 0;
        
        System.out.println("enter Number :  ");
        iNo = sobj.nextInt();

        iRet = ToggleBit(iNo);

        System.out.println("Updated Number is : "+iRet);

    }
    
}