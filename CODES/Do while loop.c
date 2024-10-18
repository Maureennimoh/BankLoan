//do while loop
/*
Author: Maureen 
Regno:CT101/G/23565/24
Date:04/10/2024
*/
#include<stdio.h>
int main() {
int start,stop,sum=0;
printf("enter the start");
scanf("%d",&start);
printf("enter the stop");
scanf("%d",&stop);
do{printf("%d\n",start);
start++;
sum+=start;
}while(start<stop);
printf("the sum is%d",sum);
return 0;
}

    