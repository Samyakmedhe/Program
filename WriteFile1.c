#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main ()
{
    int fd = 0;
    char Arr[] =" PREPLACEMENT ACTIVITYS";
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR| O_APPEND);

    Ret = write(fd,Arr,22);
    printf("%d bytes gets written int file\n",Ret); 

    close(fd);
    return 0 ;
}