//for loop
/*
Author: Maureen Wairimu 
Regno:CT101/G/23565/24
Date:05/10/2024
*/
#include<stdio.h>
int main (){
int start, stop,sum=0;
printf("enter the start");
scanf("%d",& start);
printf("enter the stop");
scanf("%d",& stop);
for(start;start<stop;start++)
{
printf("%d\n",start);
sum=sum+start;
}
printf("The sum is %d",sum);
return 0;
}