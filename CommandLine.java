

class CommandLine
{
    public static void main(String arg[])
    {
        System.out.println("Number of Command line agrument are : "+arg.lenght());

        System.out.println("Command line argument are : ");

        for( int i = 0; i < arg.lenght(); i++)
        {
            System.out.println(arg[i]);
        }
    }
}