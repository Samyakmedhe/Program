import java.util.*;

class Program269
{
    public static int OffBit(int iNo)
    {
        int iMask = 0X00000008;
        int iResult = 0;

         iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return (iNo ^ iMask);
        }
        else
        {
           return iNo;
        }
    }
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
       int iRet = 0;
        
        System.out.println("enter Number :  ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);

        System.out.println("Updated Number is : "+iRet);

    }
    
}