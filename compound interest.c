//Program for calculating compound interest 
/*
Author: Maureen 
Regno:CT101/G/23565/24
Date:24/08/2024
*/
#include<stdio.h>
#include<math.h>
int main() {
float principleamount,rate,time,compoundintrest;
int n;
printf("enter the principleamount\n");
scanf("%f",&principleamount);
printf("the principleamount is %.2f",principleamount);
printf("enter the rate\n");
scanf("%f",&rate);
printf("the rate is%.2f",rate);
printf("enter time\n");
scanf("%f",&time);
printf("the time is%.2f",time);
printf("enter the number number of times interest is compounded annually\n");
scanf("%d",&n);
compoundintrest=principleamount*pow((1+rate/(100*n)),n*time);
printf("compoundintrest is%.4f", compoundintrest);
 
    return 0;
} 