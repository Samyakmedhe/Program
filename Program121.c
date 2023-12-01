#include<stdio.h>


int CountSmall(char str[])
{
  int iCnt = 0;
  while (*str != '\0')
  {
    if((*str >= '0') &&(*str <= '9'))
    {
        iCnt++;
    }
    str++;
  }
  return iCnt;
}
int main ()
{
    char Arr [20];
    int iRet = 0;

    printf("entr the String : ");
    scanf("%[^'\n']s",Arr);
   
   

   iRet = CountSmall(Arr);

   printf("frequncy of  letter is : %d\n",iRet);

    return 0;

}