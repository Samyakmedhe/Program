import Marvellous.maths;

class PackageDemo
{
    public static void main (String Arg[])
    {
        Maths mobj = new Maths ();
        int iRet = 0 ;
        iRet = mobj.Addition(10,11);
        System.out.println("Addition is : "+iRet);
    }
}