#include<stdio.h>
void displayclass (float fmarks )
{
    if((fmarks < 0.00 )||(fmarks > 100.00))
    {

        printf("invalid marks \n");
        
    }
    if ((fmarks>= 0) && (fmarks < 35.00))
        {
            printf("your are fail ...\n");


        }
    else if ((fmarks>= 35.00) && (fmarks <50.00))


        {
            printf("your are pass ...\n");

        }
    else if ((fmarks>= 50.00) && (fmarks <60.00))
        {
                        
            printf("your are second ...\n");


        }
    else if ((fmarks>= 60.00) && (fmarks <75.00))
        {
            
            printf("your are first class ...\n");


        }
    else if ((fmarks>= 75.00) && (fmarks <=100.00))
        {

            printf("your are first with destinction...\n");

        }



}



int main () 
{

    float fvalue = 0.0f;

    printf("enter your percentage : \n");
    scanf("%f",&fvalue);

    displayclass(fvalue);

    return 0 ;
     
}