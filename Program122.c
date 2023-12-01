#include<stdio.h>


int CountVowels(char str[])
{
  int iCnt = 0;
  while (*str != '\0')
  {
    if(*str == 'A' || *str == 'E'|| *str == 'I'||*str == 'O'|| *str == 'U' ||*str == 'a' || *str == 'e'|| *str == 'i'||*str == 'o'|| *str == 'u' )
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
   
   

   iRet = CountVowels(Arr);

   printf("frequncy of  letter is : %d\n",iRet);

    return 0;

}