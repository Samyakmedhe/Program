import java.util.*;

class Assignment38
{
    public static int OffBit(int iNo , int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;
    
        iMask = iMask << (iPos - 1);

        iResult = iNo & (iPos - 1);

        iResult = iNo & iMask ;
        if(iResult == iMask)
        {
            return (iNo ^ iMask);
        }
        else
        {
            return iNo;
        }
    }
    public static void main(String Arg [])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0 , iPos = 0;
        int  iRet = 0;
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();
    
        System.out.println("enter the position :");
        iPos = sobj.nextInt();
        
        iRet = OffBit(iNo , iPos);
        
        
         System.out.println("Updated number is :"+iRet);
    
    }

}