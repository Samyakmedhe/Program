import java.util.*;

class Program246
{
    public static void  EvenOddFactor( int iNo)
    {
        int iFact = 1;
        int iCnt = 0;
       for(iCnt = 1 ; iCnt <= iNo; iCnt++)
       {
             if((iNo % iCnt) == 0)
            {
                if((iCnt % 2)==)
                {
                    System.out.println("even factor is : "+iCnt);

                }
                else
                {
                    System.out.println("odd factor is : "+iCnt);
                }
            }
       }
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