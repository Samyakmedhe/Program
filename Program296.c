#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main ()
{
  char FileName[30];
  char Arr[100] ={'\0'};
  char Brr[100] ={'\0'};

  int fd = 0  , iRet = 0 ;

  printf("Enter the name of file that you want to open current directory\n");
  scanf("%s",FileName);

  fd = open(FileName, O_RDWR);
  if(fd == -1)
  {
    printf("Unable to open the file \n",FileName);
  }
  else
  {
    printf("%s gets opened Succefully with file description %d\n",FileName,fd);
    
    iRet = read(fd ,Arr,12);

    printf("%d bytes gets Succfully wirtten into the file\n",iRet);

    printf("Data from file is : %s\n",Brr);

    close(fd);
  }

    return 0;
}   
