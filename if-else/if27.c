#include<stdio.h>
int main(){
int l,b,a;
printf("enter a number");
scanf("%d%d",&l,&b);
if(l>=b){
a=l*b;
printf("a: %d\n",a);
}
else{
a=2*(l+b);
printf("a: %d\n",a);
}
return 0;
}
