//program for calculating simpleinterest 
/*
Author: Maureen 
Regno:CT101/G/23565/24
Date:24/08/2024
*/
#include<stdio.h>
int main(){
float principleamount,time,rate, simpleinterest ;
printf("enter the principleamount\n");
scanf("%f",&principleamount);
printf("the principleamount is%.2f",principleamount);
printf("enter the time\n");
scanf("%f",&time);
printf ("the time is%.2f",time);
printf("enter the rate\n");
scanf("%f",&rate);
printf("the rate is%.2f",rate);
simpleinterest=(principleamount*time*rate)/100;
printf("the simpleinterest is%.3f", simpleinterest);
return 0;
}