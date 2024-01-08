import java.util.*;

class Matrix
{
    public void Display(int Arr[][])
    {
        int i = 0, j = 0;

        System.out.println("Enter elments are : ");
        for( i = 0; i < Arr.length ; i++)
        {
            for( j = 0; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    public int  Summation(int Arr[][])
    {
        int Sum = 0,i = 0, j = 0;

         for( i = 0; i < Arr.length ; i++)
        {
            for( j = 0; j < Arr[i].length ; j++)
            {
                Sum = Sum + Arr[i] [j];
            }
           
        }
         return Sum;
    }
}

class Program387
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        iCol = sobj.nextInt();

        int Arr[] [] = new int[iRow] [iCol];
        int i = 0 , j = 0;

        System.out.println("Enter the elments : ");
        for(i = 0; i < iRow ; i++)
        {
            for( j = 0; j < iCol ; j++)
            {
                Arr [i][j] = sobj.nextInt();
            }
        }

        Matrix mobj = new Matrix();
        mobj.Display(Arr);
        int iRet = 0;

        iRet = mobj.Summation(Arr);
        System.out.println("Addition of All Elements is :"+iRet);
    }
}