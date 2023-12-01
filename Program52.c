
#include<stdio.h>
#include<stdbool.h>

bool checkprime(int ino)
{
    int iCnt = 0;
    bool bflag = true;

    if(ino < 0)
    {
        ino = -ino ;

    }

    for(iCnt = 2; iCnt <=(ino/2);iCnt++)
    {
        if ((ino % iCnt)== 0)
        {
            bflag =  false;
            break;
        }
        
    }
     return bflag;
}


int main ()
{
    int ivalue = 0;
    bool bRet = false;

    printf("enter the number :\n ");
    scanf("%d",&ivalue);

  bRet =  checkprime(ivalue);
    if(bRet == true )
    {
        printf("%d is a prime number\n",ivalue);

    }
    else
    {
         printf("%d is not a prime number\n",ivalue);

    }
    
    return 0;

}