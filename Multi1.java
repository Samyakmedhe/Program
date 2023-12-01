
class Demo implements Runnable
{
    public void run()
    {
        System.out.println("thread is running...");
    }
}
class Multi2
{
    public static void main (String arg[])
    {
        System.out.println("inside main thread...");

        Demo obj1 = new Demo();
        thread t1 = new thread(obj1);

        Demo obj2 = new Demo();
        thread t2 = new thread(obj2);

        obj1.start();
        obj2.start();
    }
}