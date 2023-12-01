#include<stdio.h>

void display (int ino )
{
   int idigit = 0;

   while(ino > 0)
   {
        printf("----------------------------------\n");
        idigit = ino %10;
        printf("digit is : %d\n",idigit);

        ino = ino / 10;
        printf("number is : %d\n",ino);
   }
}
int main ()
{
    int ivalue = 0;

    printf("enter number :\n");
    scanf("%d",&ivalue);

    display (ivalue);
    return 0;
}