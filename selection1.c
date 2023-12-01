#include<stdio.h>

int main ()
{
  int no = 0;
  int ans = 0;

  printf("enter number:\n");
  scanf("%d",&no);

  ans = no %2 ;
   
  if (ans ==0)
  {
    printf("number is even \n");
  } 
  else
 {
    printf("number is odd\n");
 }

    return 0;
}