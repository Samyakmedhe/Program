import java.util.*;

class Assignment39
{
    public static boolean ChkBit(int iNo , int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;
    
        iMask = iMask << (iPos - 1);

        iResult = iNo & (iPos - 1);

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
    public static void main(String Arg [])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0 , iPos = 0;
        boolean  bRet = false;
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();
    
        System.out.println("enter the position :");
        iPos = sobj.nextInt();
        
        bRet = ChkBit(iNo , iPos);
        
        if(bRet == true)
        {
            System.out.println("True..");
        }
        else
        {
            System.out.println("False...");
        }
       
    
    }

}