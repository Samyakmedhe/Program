import java.util.*;

class Assignment34
{
    public static int CountEven(int iNo)
    {
        int iCount = 0,iCnt = 0, rem =  0;
       while( iNo > 0 )
        {
            rem = iNo % 10;
            if(iNo % 2 == 0)
            {
                iCount++;

            }
           iNo = iNo / 10;
        }
        System.out.println("the count of even digits :"+iCount);
        return iCount ;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();

        iRet = CountEven(iNo);
       
       
    }
}