//problem statement :Accept 2 value from user and perform the addition.

//step 1 : understand the program statement 
// conclusion :we have to accept 2 integers and prefrom its aaddtion

//step 2 : write th algorithm 
/*
    start 
        accept first number from user and store it into no 1
        accept second number from user and stor it into no2
        create one variable to store the result named as ans 
        perform addtion of no1 and no2 , store the result int ans 
        display the result from ans to user 
    stop

*/

//step 3 : decide the programming langaunge (C,C++,Java,Pytho)
// we slect the c programming 

//step 4 :write a code 
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function name :     Addition
//  Description :       It is use to perfor of aadition of 2 integers
//  intput argument :   Integer ,integer
//  output :            integer
//  author :            samyak kailas medhe 
//  date :              25/09/2023
//
/////////////////////////////////////////////////////////////////////////




int Addition (int iNo1, int iNo2)
{
    int iSum = 0;   //variable to store the value of addition
    iSum = iNo1 + iNo2;
    return iSum;


}

/////////////////////////////////////////////////////////////////////////
//
//  enter point function of an application which perform addition of 2 integrs
//
/////////////////////////////////////////////////////////////////////////
int main ()
{
    int ivalue1 = 0;    //variabl to store first input 
    int ivalue2 = 0;    //variabl to store second input 
    int ians = 0 ;      //variabl to store  the result  


    printf("enter first number :\n");
    scanf("%d",&ivalue1);

    printf("enter second number :\n");
    scanf("%d",&ivalue2);

    ians= (ivalue1 + ivalue2);//function call 

    printf("Addition is : %d \n",ians);

    return 0 ;
    

}

//step 5 : test th code 
/*
test case 1 :
input : 10 11 
output : 21

test case 2 :
input : 11- 11 
output : 0

test case 3 :
input : -10 -11 
output : 21

test case 4  :
input : 10- 11 
output : 1


*/
