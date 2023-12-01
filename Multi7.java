
class Demo extends Thread
{
    public void run()
    {    
    }
    synchronized public void display()
    {
        
    }
}

class Multi6
{
    public static void main(String arg[]) throws Exception
    {
        System.out.println("current thread is :"+Thread.currentThread().getName());

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        
        obj1.start();
        obj2.start();
         System.out.println("priority of obj1 is :"+obj1.getPriority());
         System.out.println("priority of obj2 is :"+obj2.getPriority());

         obj1.setPriority(8);
        obj1.setPriority(10);

        System.out.println("priority of obj1 is :"+obj1.getPriority());
         System.out.println("priority of obj2 is :"+obj2.getPriority());
    }

}