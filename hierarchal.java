
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

class DerivedX extends base
{
   public int P ,Q;
    public DerivedX ()
    {
        System.out.println("derivedX constructor");
    }
}

class hierarchal 
{
    public static void main(String A[])
    {
      
        derived dobj1 = new derived();
        derivedX dobj1 = new derivedX();
      
        
    } 
}

