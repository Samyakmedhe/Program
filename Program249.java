import java.util.*;

class Program249
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt = 0;

        System.out.println("enter the number of element :");
        iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter the elments : ");

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
       System .out.println("elment of array:");
         for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
          System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}