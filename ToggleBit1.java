import java.util.*;

class ToggleBit1
{
    public static int ToggleBit(int iNo)
    {
        
        int iMask = 0X00000240;
        int iResult = 0;
        iResult = iNo ^ iMask;

        return iResult;
    
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0 ;
        int  iRet = 0;
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();
          
        iRet = ToggleBit(iNo);
        
        
        System.out.println("Updated number is :"+iRet);
    }
}