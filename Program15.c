#include<stdio.h>

void displayexamtime (int istandard)
{
    if(istandard == 1)
    {
        printf("your exam is at 8 am\n");
    }
    else if (istandard == 2)
    {
         printf("your exam is at 9 am\n");
    }
    
    else if (istandard == 3)
    {
         printf("your exam is at 10 am\n");
    }
    
    else if (istandard == 4)
    {
         printf("your exam is at 11 am\n");
    }
    else if (istandard == 5)
    {
         printf("your exam is at 12 noon am\n");
    }
    

}

        



int main () 
{
    int ivalue = 0 ;

    printf("enter your standard : \n");
    scanf("%d",&ivalue);

    displayexamtime(ivalue);


return 0 ;

}