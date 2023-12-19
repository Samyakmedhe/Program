import java.util.*;

class Program269
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00010000;
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
        
        System.out.println("enter Number :  ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);

        if(bRet == true)
        {
            System.out.println("17 bit is ON");
        }
        else
        {
            System.out.println("17 bit is OFF");
        }
        

    }
    
}