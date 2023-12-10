import java.util.*;

class Assignment4
{
    public static void main(String Arg[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);
       
        String Reverse = "";
         int i = 0;

        System.out.println("Enter your Name : ");
        String str = sobj.nextLine();

        int length =str.length();

        for(i = length -1 ;i >= 0 ; i--)
        {
           Reverse = Reverse + str.charAt(i);
        }
        System.out.println("number of small letters :"+Reverse);
    
    }
}