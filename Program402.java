import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix 
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }
    public int CountEven()
    {
        int i = 0, j = 0 , iFrequency = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] % 2 == 0)
                {
                    iFrequency++;
                }
            }
            
        }  
        return iFrequency;
    }
}
class Program402
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0 ,iRet =0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow , iCol);

        mobj.Accept();
        mobj.Display();

        int iValue = 0;

        iRet = mobj.CountEven();

        System.out.println("even elments are : "+iRet);

       
        mobj = null;
        System.gc();

    }
}