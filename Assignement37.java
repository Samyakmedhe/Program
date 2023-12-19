import java.util.*;

class Assignement37
{
    public static boolean ChkBit(int iNo)
    {
        int iMask = 0X00004000;
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
    public static void main(String Arg [])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter Number :");
        iNo = sobj.nextInt();

        bRet = ChkBit(iNo);

        if(bRet == true)
        {
            System.out.println("15th bit is On...");

        }
        else
        {
            System.out.println("15th bit is Off ...");
        }

    
    }

}