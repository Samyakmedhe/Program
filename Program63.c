#include<stdio.h>
#include<stdbool.h>

int CheckPallindrome(int ino)
{
    int iCopy = ino;
    int iRev = 0;
    int iDigit = 0;

    if(ino < 0)
    {
        ino = -ino ;
    }
    while(ino != 0)
    {
        iDigit = ino % 10;
        ino = ino % 10;

        iRev = (iRev * 10)+ iDigit;

    }
   return(iRev == iCopy);
}   
int main ()
{

    int ivalue = 0;
    bool bRet  = false;

    printf("enter number: \n");
    scanf("%d",&ivalue);

    bRet =  CheckPallindrome(ivalue);
    printf("reverse number is :%d\n",bRet);

    if(bRet == true )
    {
     printf("%d is  a pallindorme nummber \n",ivalue);
    
    }
    else
    {
        printf("%d is not a pallindorme nummber \n",ivalue);
    }

    return 0 ;
}
