#include<stdio.h>

int  countdigits(int ino )
{
    int iCnt = 0;
    

   while(ino > 0)
   {
    ino = ino / 10;
    iCnt++;

   }
   return iCnt;
}
int main ()
{
    int ivalue = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%d",&ivalue);
    iRet =  countdigits(ivalue);

    printf("Number of digits are :%d\n",iRet);
    return 0;
}