
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main ()
{
    int fd = 0;
    int iRet = 0;

    char Arr[] = "Logic Building with Industrial Project Development";
    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");

    }
    else
    {
       iRet = write(fd,Arr,14);
       printf("%d Bytes gets Succesfully written int the file \n",iRet);

       close(fd);
      
    }

    return 0;
}