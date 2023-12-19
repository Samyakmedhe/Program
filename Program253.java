import java.util.*;


class Program253
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("enter yorue name :");
        str = sobj.nextLine();
    
        char Arr[] = str.tocharArray();
        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
        
    }
}