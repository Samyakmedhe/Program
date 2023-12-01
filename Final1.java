

class Demo
{
    public int A;
    public Final int B;
    Demo()
    {
        A =11;
        B = 21;

    }
    Demo(int i, int j)
    {
        A= i;
        B = j;

    }

}
class Final1
{
    public static void main (String arg[])
    {
        Demo dobj = new Demo();
        System.out.println("value of A :"+dobj.A);
        System.out.println("value of B :"+dobj.B);
        dobj.A++;
       // dobj.B++;

       demo dobj2 = new Demo (51,101);
        System.out.println("value of A :"+dobj2.A);
        System.out.println("value of B :"+dobj2.B);
    }
}