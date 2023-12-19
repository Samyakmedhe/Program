import java.util.*;

class Digit
{
    public static int CountOdd(String str)
    {
        int iCount = 0,iCnt = 0, iSize = 0;
      String Arr[] = Integer.toString(a);

     for( iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
        if((Arr[iSize] >='3' && Arr[iSize] <= '7'))
        {
            iCount++;
        }
        }
        return iCount;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        String str = null;
      
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();

        iRet = CountOdd(str);
       System.out.println("the count of odd digits :"+iRet);
       
    }
}