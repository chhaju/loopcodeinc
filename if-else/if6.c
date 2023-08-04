#include<stdio.h>
#include<math.h>
int main(){
int sp,cp,a,b;
printf("Enter a number");
scanf("%d",&sp);
printf("Enter a number");
scanf("%d",&cp);
if(sp>=cp){
a=sp-cp;
b=a/cp*100;
printf("%d%d",a,b);
}
else{
a=cp-sp;
b=a/cp*100;
printf("%d%d",a,b);
}
return 0;
}
