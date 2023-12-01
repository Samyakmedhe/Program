import java.io.*;

class Buffer
{
    public static void main(String arg[]) throws Exception
    {
    try
     {
         BufferedReader br = new BufferedReader( new InputStreamReader(System.in));
    
        System.out.println("enter first numbr :");
        int no1 = Integer.parseInt(br.readLine());

         System.out.println("enter first numbr :");
         int no2 = Integer.parseInt(br.readLine());
      
    

           int Ans = no1 + no2;
        System.out.println("Addition is "+Ans);
        } 
        catch(Exception obj)
        {}
    }
    
}