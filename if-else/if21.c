#include<stdio.h>
int main(){
int salary,year,a,bonus;
printf("Enter a number");
scanf("%d%d",&salary,&year);
if(year>=5){
a=salary*0.5;
bonus=salary+a;
}

printf("bonus: %d\n", bonus);

return 0;
}
