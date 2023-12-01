
class Demo extends Thread
{
    public void run()
    {
        String name = Thread.currentThread().getName();
        System.out.println("current thread is :"+Thread.currentThread().getName());
        for(int i = 1; i < 1000; i++)
        {
            System.out.println("name of thread is :"+name+" with counter :"+1);
        }
    }
}

class Multi3
{
    public static void main(String arg[])
    {
        System.out.println("current thread is :"+Thread.currentThread().getName());

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();
        obj1.setName("first _Thread");
        obj2.setName("second _thread");
        obj1.start();
        obj2.start();
    }
}