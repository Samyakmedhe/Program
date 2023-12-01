#include<stdio.h>

void display (int ino )
{
    int idigit = 0;

    printf("value of ino is :%d\n",ino);

printf("---------------------------------------------\n");
    idigit = ino % 10;
    printf("%d\n",idigit);
    ino = ino /10;
    printf("value of ino is :%d\n",ino);
printf("---------------------------------------------\n");
     idigit = ino % 10;
    printf("%d\n",idigit);
    ino = ino /10;
     printf("value of ino is :%d\n",ino);

      printf("---------------------------------------------\n");
    idigit = ino % 10;
    printf("%d\n",idigit);
    ino = ino /10;
     printf("value of ino is :%d\n",ino);
}
int main ()
{
    int ivalue = 721;

   // printf("enter number :\n");
    //scanf("%d",&ivalue);

    display (ivalue);
    return 0;
}