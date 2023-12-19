
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

  fd = creat(FileName, 0777);
  
  if(fd == -1)
  {
    printf("Unable to create %s the file \n",FileName);
  }
  else
  {
    printf("%s gets created Succefully with file description %d\n",FileName,fd);
    
  }

    return 0;
}   