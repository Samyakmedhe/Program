import java.util.*;

class Program281
{
    public static boolean CheckBit (int iNo, int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;

        iMask = iMask << (iPos -1);
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
        int iNo = 0,iPos = 0;
    
       boolean bRet = false;
        
        System.out.println("enter Number :  ");
        iNo = sobj.nextInt();

        System.out.println("enter the postion  :  ");
        iPos = sobj.nextInt();

        bRet = CheckBit(iNo, iPos);
        if(bRet == true)
        {
            System.out.println("bit is on At given position.. ");
        }
        else
        {
            System.out.println("bit is off At given position.. ");
        }
        
    }
    
}