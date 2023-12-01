#include<stdio.h>


int CountSpace(char str[])
{
  int iCnt = 0;
  while (*str != '\0')
  {
    if(*str == ' ')
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
   
   

   iRet = CountSpace(Arr);

   printf("frequncy of  letter is : %d\n",iRet);

    return 0;

}