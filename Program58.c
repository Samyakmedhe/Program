#include<stdio.h>

int  sumdigits(int ino )
{
    int isum = 0;
  
   while(ino != 0)
   {
  
    isum = isum + (ino % 10);
    ino = ino / 10;
  

   }
   return isum;
}
int main ()
{
    int ivalue = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%d",&ivalue);
    iRet =  sumdigits(ivalue);

    printf("Number of digits are :%d\n",iRet);
    return 0;
}