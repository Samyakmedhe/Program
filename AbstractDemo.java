abstract  class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("inside constructor\n");
        this.A = 0;
        this.B = 0;

    }

    abstract void fun(); //virtual void fun () = 0;

    void gun()
    {
        System.out.println("inside gun of demo");
    }
}

class Hello extends Demo 
{
    public Hello()
    {
        System.out.println("inside Hello constructor");
    }

    public void fun ()
    {
         System.out.println("inside fun of Hello");
    }
}
class AbstractDemo1
{
    public static void main (String arg[])
    {
       Demo hobj = new Hello ();
       hobj.fun();
       hobj.gun();

    }
}