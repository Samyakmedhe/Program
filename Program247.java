import java.util.*;

class Program247
{
    public static void  EvenOddFactor( int iNo)
    {
        int iFact = 1;
        int iCnt = 0;
        int iSum = 0;
        int iSumOdd =0;

       for(iCnt = 1 ; iCnt <= iNo; iCnt++)
       {
             if((iNo % iCnt) == 0)
            {
                if((iCnt % 2)== 0)
                {
                    iSumEven = iSumEven + iCnt;

                }
                else
                {
                    iSumOdd = iSumOdd + iCnt;
                }
            }
       }
       System.out.println("Addition of eeven "+iSumEven);
        System.out.println("Addition of odd "+iSumOdd);
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0 , iAns = 0;

        System.out.println("enter number : ");
        iValue = sobj.nextInt();

        EvenOddFactor(iValue);
        sobj.close();

    }
}