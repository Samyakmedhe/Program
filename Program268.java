import java.util.*;

class Program268
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00000100;
        int iResult = 0;

         iResult = iNo & iMask;

        if(bRet == true)
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

        if(iResult == iMask)
        {
            System.out.println("9  bit is ON");
        }
        else
        {
            System.out.println("9 bit is OFF");
        }
        

    }
    
}