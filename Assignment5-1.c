#include<stdio.h>


int main ()
{
 char name[30];
 printf("please enter full name");
 scanf("%s[^\n]",name);

 printf("your name is %s",name);
 

    return 0;
}