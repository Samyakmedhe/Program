


class Base
{
    public int A,B;
    {
        System.out.println("base constructor");
    } 
    public void fun ()
    {
        System.out.println("base fun");
    } 
    

}

class Derived extends Base
{
    public int X,Y;
    {
        System.out.println("derived constructor");
    } 
    {
        System.out.println("derived gun");
    } 
}

class DerivedX extends derived
{
   public int P ,Q;
    public DerivedX ()
    {
        System.out.println("derivedX constructor");
    }
}

class multilevel 
{
    public static void main(String A[])
    {
      DerivedX dobj = new DerivedX();
        dobj.fun();
        dobj.gun();
        
    } 
}

