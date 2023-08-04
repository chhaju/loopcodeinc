#include <stdio.h>
#include <math.h>
int main(){
int sp,cp,p,t;
printf("Enter a valuve");
scanf("%d",&sp);
printf("Enter a valuve");
scanf("%d",&cp);
if(sp<cp){
printf("invalide");
}
else{
p= cp-sp;
t= p/cp*100;
printf("%d %d",p,t);
}
return 0;
}
