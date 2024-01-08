import java.util.*;

class Matrix
{
   protected int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the Elments : ");
        for( i = 0; i < Arr.length ; i++)
        {
            for( j = 0; j < Arr[i].length ; j++)
            {
               Arr[i][j] = sobj.nextInt(); 
            }
            
        }
    }

    public void Display()
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
    
    
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int Summation()
    {
        int iSum = 0;
        int i = 0, j = 0;
         for( i = 0; i < Arr.length ; i++)
        {
            for( j = 0; j < Arr[i].length ; j++)
            {
               iSum = iSum + Arr[i][j];
            }
          
        }
         return iSum;
    }

    public int Minimum()
    {
        int i = 0, j = 0;
        int iMax = Arr[0][0];
         for( i = 0; i < Arr.length ; i++)
        {
            for( j = 0; j < Arr[i].length ; j++)
            {
                if(Arr[i][j] < iMax)
                {
                    iMax = Arr[i][j];
                }
              
            }
          
        }
        return iMax;
    }
}
class Program393
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
       iRet = mobj.Summation();
       System.out.println("Addition of All elments is : "+iRet);

         iRet = mobj.Minimum();
        System.out.println("Minimum number of the elments : "+iRet);
        mobj = null;
        System.gc();

    }
}