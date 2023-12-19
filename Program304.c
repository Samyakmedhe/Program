#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024
int main ()
{
  int fdread = 0, fdwrite = 0, iRet = 0;
  char Buffer[BUFFERSIZE] = {'\0'};
  char FnameSrc[30];
  char FnameDest[30];

  printf("Enter the name of Existing file : \n");
  scanf("%s",FnameSrc);

  printf("Enter the name of new file that we want to create  : \n");
  scanf("%s",FnameDest);

  fdread = open(FnameSrc,O_RDONLY);

  if(fdread == -1 )
  {
    printf("Failure in opening existing file \n");
    return -1;
  }

  fdwrite = creat(FnameDest, 0777);
  if(fdwrite == -1)
  {
   printf("Failure in opening existing file \n");
    return -1;
  }

  while ((iRet = read(fdread,Buffer,sizeof(Buffer))) != 0)
  {
    write(fdwrite,Buffer,iRet);
  }
  
  close (fdread);
  close(fdwrite);

  printf("file copy Succesuful...\n");

  return 0;
}