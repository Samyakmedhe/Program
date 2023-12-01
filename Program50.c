
#include<stdio.h>
#include<stdbool.h>
bool checkperfect(int ino ) 
{
    int iCnt = 0;
    int isum = 0;

    if (ino < 0)
    {
        ino = -ino;
    }
    
    for (iCnt = 1; iCnt<=(ino/2) ;iCnt++)
    {
        if((ino % iCnt)== 0)
        {
         isum = isum + iCnt;
        }
    }   
        if(isum == ino)
        {
            return true;
        }
        else
        { 
            return false; 
        }
    


}
int main ()
{
    int ivalue = 0;
    bool bRet = false;
   printf("enter the number:\n");
    scanf("%d",&ivalue);

 
  bRet = checkperfect(ivalue);
  if (bRet == true)
{          
  
  printf("%d is a perfect number\n",ivalue);
}
else
{
printf("%d is a not perfect number\n",ivalue);

}

    return 0 ;
}
// time complexity : 0(n/2)