import java.util.*;

class Toggle4
{
    public static int ToggleBit(int iNo , int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;
    
        iMask = iMask << (iPos - 1);

        iResult = iNo ^ iMask ;
        
       return iResult;
       
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
        
        iRet = ToggleBit(iNo , iPos);
        
        
         System.out.println("Updated number is :"+iRet);
    
    }

}