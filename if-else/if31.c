#include<stdio.h>
int main(){
int bsalary,hra,da,a;
printf("Enter a salary");
scanf("%d",&bsalary);
if(bsalary<=10000){
hra=(20/100)*bsalary;
da=(80/100)*bsalary;
a=bsalary+hra+da;
printf("a: %d\n",a);
}
else if(bsalary<=20000){
hra=(25/100)*bsalary;
da=(90/100)*bsalary;
a=bsalary+hra+da;
printf("a: %d\n",a);
}
else if(bsalary>20000){
hra=(30/100)*bsalary;
da=(95/100)*bsalary;
a=bsalary+hra+da;
printf("a: %d\n",a);
}
return 0;
}
