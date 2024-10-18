//while loop
/*
Author: Maureen Wairimu 
Regno:CT101/G/23565/24
Date:05/10/2024
*/
#include<stdio.h>
int main(){
int start, stop,sum=0;
printf("enter the start");
scanf("%d",& start);
printf("enter the stop");
scanf("%d",&stop);
while (start<stop)
{printf("%d\n",start);
start++;
sum+=start;
}
printf("the sum is %d",sum);
return 0;
}