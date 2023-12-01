

class Array2
{
    public static void main (String arg[])
    {
        int Arr[] [] = {{10,20,30},{40,50,60},{70,80,90}};

        int brr[][] = new int [3][3];

        brr[0][0] = 10;
        brr[0][1] = 20;
        brr[0][2] = 30; 
    
        brr[1][0] = 40; 
        brr[1][1] = 50; 
        brr[1][2] = 60; 

        brr[2][0] = 70; 
        brr[2][1] = 80; 
        brr[2][2] = 90; 


        int i = 0;int  j = 0; 

        for (i = 0; j < Arr [i].length; j++)
        {
            System.out.print(Arr[i][j]+"\t");
        }
        System.out.println();



    }   
}
