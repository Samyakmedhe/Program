import java.util.*;

class Digit1
{
    public static int Multiply(int iNo)
    {
        int Multi = 1,iCnt = 0 , rem = 0;
        while(iNo > 0)
        {
           rem = iNo % 10;
            if(rem != 0)
            Multi = Multi * (iNo %  10);
            iNo = iNo / 10;
        }
        return Multi;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();

        iRet = Multiply(iNo);
       
        System.out.println("the Multiplication of Alls digits :"+iRet);
    }
}