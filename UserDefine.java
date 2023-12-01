import java.util.*;

class AgeInvalid extends Exception 
{
    public AgeInvalid(String str )
    {
        super(str);
    }
}
class UserDefine
{
    public static void main (String arg[])
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("enter your age :");
        int iAge = sobj.nextInt();
        try
        {
            if(iAge < 18)
             {
            throw new AgeInvalid("your age is below 18");
             }
             else
            {
            System.out.println("login succesful..");
             }
        }    
        catch (AgeInvalid obj)
        {
            System.out.println("inside catch block ");
            System.out.println(obj);
        }
  
    }
}
