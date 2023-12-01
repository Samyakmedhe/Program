//Problem statement : accept radius from user and cslculate the area of circle

// step1 : understand the problem statement 
//conclusion : we are going to use the fprmula as PI*R*R

//step2 : Algorithm
/*
    START
        accpt radius from user and store

*/
/////////////////////////////////////////////////////////////////////////////////////////////
//
////
//
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  function name : calculatearea 
//  description   : it is used to calculate area of circle 
//  intput        :
//  output        :312.000
//  auther name   : samyak kailas medhe 
//  date          :2/10/23
/////////////////////////////////////////////////////////////////////////////////////////////

#define PI 3.14
float calculatearea (float radius)
{
    

    float farea = 0.0f;
    farea =PI*radius*radius;
    return farea;

}



int main () 
{

    float fradius = 0.0f;
    float farea = 0.0f;


    printf("enter the redius of circle :\n");
    scanf("%f",&fradius);


    farea = calculatearea (fradius);

    printf ("area of circle :%f\n",farea);



    return 0 ;

}