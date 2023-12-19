
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main ()
{
  char FileName[30];
  int fd = 0;

  printf("Enter the name of file that you want to creat current directory\n");
  scanf("%s",FileName);

  unlink(FileName);
  
    return 0;
}   