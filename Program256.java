import java.util.*;


class Program256
{
    public static int CountCapital(String str)
    {
        int iCnt = 0;
        int iCount = 0;
    
        char Arr[] = str.tocharArray();

        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }

        }
        return iCount;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        String str = null;

        System.out.println("enter yorue name :");
        str = sobj.nextLine();
    
       iRet = CountCapital(str);
       System.out.println("number of Capital charaters are : "+iRet);
       
    }
}