
class base
{
    
    public void fun()
    {System.out.println("inside base fun");}
     public void gun()
    {System.out.println("inside base gun");}
     public void sun()
    {System.out.println("inside base sun");}
     public void run()
    {System.out.println("inside base run");}
    
    
}

class Derived extends base
{
    public void fun()
    {System.out.println("inside Derived fun");} 
     public void sun()
    {System.out.println("inside Derived sun");} 
     public void run(int A)
    {System.out.println("inside Derived run with one parameter");} 
     public void mun()
    {System.out.println("inside Derived mun");} 


}

class Overriding 
{
    public static void main (String arg[])
    {
        base bobj = new Derived();


        bobj.fun();
        bobj.gun();
        bobj.sun();
        bobj.run();
       // bobj.run(11);
    }
} 

