#include <stdio.h>
#include <math.h>
int main(){
int sp,cp,p,t;
printf("Enter a valuve");
scanf("%d",&sp);
printf("Enter a valuve");
scanf("%d",&cp);
if(sp>cp){
p= sp-cp;
t= p/cp*100;
printf("%d %d",p,t);
}
else{
printf("invalied");
}
return 0;
}
