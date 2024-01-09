import java.util.*;
import java.io.*;

class Program340
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+"," ");

        String words[] = str.split(" ");

      
        int i = 0;
        for( i = 0; i < words.length ; i++)
        {
            System.out.println("Word is : "+words[i]+ " having length : "+words[i].length());
        }
    }
}