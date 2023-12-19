
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main ()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable to open file\n");

    }
    else
    {
        printf("File is Successfully Creat with fd : %d\n",fd);
      
    }

    return 0;
}