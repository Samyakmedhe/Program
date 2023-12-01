#include<stdio.h>


void replace(char str[])
{
 
  while (*str != '\0')
  {
     if(*str == 'A' || *str == 'E'|| *str == 'I'||*str == 'O'|| *str == 'U' ||*str == 'a' || *str == 'e'|| *str == 'i'||*str == 'o'|| *str == 'u' )
    {
        *str = '_';
    }
    str++;
  }
}
int main ()
{
    char Arr [20];
  

    printf("entr the String : ");
    scanf("%[^'\n']s",Arr);
   
   

    replace(Arr);

   printf("updated string is : %s\n",Arr);

    return 0;

}