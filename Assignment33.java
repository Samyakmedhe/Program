import java.util.*;


class Assignment33
{
    public static int Difference(int Arr[], int No)
    {
        int iCnt = 0,iSum = 0, jSum = 0  ;
        for(iCnt = 1; iCnt <= iNo ; iCnt++)
        {
            if((iNo % 2)== 0)
            {
                iSum = iSum + iNo;
            }
            else
            {
                jSum = jSum + iNo;
            }
        }
        
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iNo2 = 0;
        int iRet = 0;

        System.out.println("Enter number of elements :");
        iNo = sobj.nextInt();

        System.out.println("Enter number:");
        iNo2 = sobj.nextInt();

        
    iRet = Difference(iNo ,iNo2);
     

         System.out.println("number of :"+iRet );

    }
}