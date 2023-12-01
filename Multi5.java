
class Demo extends Thread
{
    public void run()
    {
        for(int i =1; i <10 ; i++)
        {
            try
            {
                System.out.println("value of i is :"+1);
                Thread.sleep(5000);
            }
            catch(Exception obj)
            {}
        }
      
    }
}

class Multi5s
{
    public static void main(String arg[]) throws Exception
    {
        System.out.println("current thread is :"+Thread.currentThread().getName());

        Demo obj1 = new Demo();
        
        obj1.start();
        obj1.join();
        System.out.println("End of main Thread");
    }
}