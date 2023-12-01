#include<stdio.h>

void displayexamtime (int istandard)
{

    switch (istandard)
    {
        case 1 : 
            printf("your exam is at 8 am\n");
            break;
        case 2 : 
            printf("your exam is at 9 am\n");
            break;
        case 3 : 
            printf("your exam is at 10 am\n");
            break;

        case 4 : 
            printf("your exam is at 11 am\n");
            break;
        case 5 : 
            printf("your exam is at 12 am\n");

    break;
        default :
        printf("wrong input..\n");
    
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