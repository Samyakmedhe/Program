interface Mathematics
{
    public int Addition(int A , int B);
    public int Substraction (int A,int B);
}

class Marvellos implements Mathematics
{
    public int Addition(int A,int B)
    {
        return A + B;

    }
    public int Substraction(int A,int B)
    {
        return A - B;
        
    }
}
class InterfaceDemo
{
    public static void main (String arg[])
    {
       Marvellos mobj = new Marvellos();
       int iRet = 0;
       iRet = mobj.Addition(11,10);
       System.out.println("Addition is : "+iRet);
       iRet = mobj.Substraction(11,10);
       System.out.println("Substraction is : "+iRet);
    }
}