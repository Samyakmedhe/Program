import java.util.*;

class Program250
{
    public static int Adddition(int Brr[])
    {
        int iCnt = 0 , iSum = 0;
        for(iCnt = 0; iCnt < Brr.length; iCnt ++)
        {
           iSum = iSum + Brr[iCnt];

        }
        return iSum;

    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt = 0;
        int iRet = 0;

        System.out.println("enter the number of element :");
        iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter the elments : ");

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

      iRet = Adddition(Arr);
      System.out.println("Addition of all element is : "+iRet);
    }
}