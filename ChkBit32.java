import java.util.*;

class ChkBit32
{
    public static boolean ChkBit(int iNo)
    {
        int Digit = 0;
        int iCnt = 0;
        while( iNo != 0)
        {
           Digit = iNo % 2;
           iNo = iNo / 2;
           if(Digit == 1)
            {
                iCnt++;
            }
           
        }
         return true;
    }
    public static void main(String Arg [])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();

        bRet = ChkBit( iNo);
        if(bRet == true)
        {
            System.out.println("First & last bit is on ...");
        }
        else
        {
            System.out.println(" bit is off ...");
        }
        
      

    }
}