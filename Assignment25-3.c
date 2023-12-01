#include<stdio.h>


void display(char ch)
{
    char cvalue = '\0';
   for(cvalue = 97; cvalue <= 122; cvalue++ )
   {
        for(cvalue = 65;cvalue <= 90;cvalue++)
     {
        printf("%c\t",cvalue);
     }
   }
}
int main ()
{

    char cvalue = '\0';
    
    printf("enter the character");
    scanf("%c",&cvalue);

     display(cvalue);

    
 return 0;
}