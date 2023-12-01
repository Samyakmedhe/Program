#include<stdio.h>

int main ()
{
    int standard =0 ;
    printf("primary school portal\n");

    printf("enter your divison:\n");
    scanf("%d",&standard);

    switch (standard)
    {
    case 1:
        printf("your exam is at 1pm \n ");
        break;
    case 2:
    printf("your exam is at 2 pm \n ");
        break;

    case 3 :
     printf("your exam is at 3pm \n ");
     break  ;

     case 4 :
     printf("your exam is at 4 pm \n");
     break;

     default:
     printf("invalid standard\n");

     return 0;
        
    }

}