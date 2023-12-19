import java.util.*;

class Program634
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 4;
        int iResult = 0;

         iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
           return false;
        }
    }
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;
        int iMask = 4;
        int iResult = 0;

        System.out.println("enter Number :  ");
        iNo = sobj.nextInt();

        iResult = iNo & iMask;
        bRet = CheckBit(iNo);

        if(iResult == iMask)
        {
            System.out.println("3rd bit is ON");
        }
        else
        {
            System.out.println("3rd bit is OFF");
        }
        

    }
    
}