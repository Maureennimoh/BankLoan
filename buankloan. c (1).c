/*Author:Maureen Wirimu
Registration number:CT101/G/23565/24
Date:28th September 2024
program for determining eligibility of a person to get a loan
preprocessor directive --scanf(), printf () 
*/
#include<stdio.h>
int main () {
int age;
float income;
printf("enter the age of person ");//Input from user
scanf("%d",&age);
printf("enter the income of recipient");
scanf("%f",&income);
if (age>=21&&income>=21000) {printf("congratulations you qualify for a loan");}else{printf("unfortunately we are unable to offer you a loan at this time ");}
return 0;
}
