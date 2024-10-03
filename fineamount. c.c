#include<stdio.h>
int main () {
int bookid,duedate, returndate,daysoverdue,finerate, fineamount;
printf("enter the bookid\n");
scanf("%d",&bookid);
printf("enter the duedate\n");
scanf("%d",&duedate);
printf("enter return date\n");
scanf("%d",&returndate);
daysoverdue=returndate- duedate;
printf("%d",duedate);
if(daysoverdue==0){finerate=0;} 
else if(daysoverdue<=7){finerate =20;}
else if(daysoverdue<=14) {finerate=50;}
else {finerate=100;}
fineamount=finerate*daysoverdue;
printf("the book id is %d\n",bookid);
printf("duedate is %d\n",duedate);
printf("returndate is%d\n",returndate);
printf("number of days overdue are%d\n",daysoverdue);
printf("the fineamount is%d\n",fineamount);
return 0;
}