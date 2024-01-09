import java.util.*;
import java.io.*;

class Program339
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.trim();

        System.out.println("After trim : "+str);

        str = str.replaceAll("\\s+"," ");

        System.out.println("Aftr replaceAll : "+str);

        String words[] = str.split(" ");

        System.out.println("Number of words in the sentance are : "+words.length);
        
        for (String s : words);
        {
            System.out.println(s);
        }
        
    }
}