#include<stdio.h>
int main(){
int a,b,c;
printf("Enter a number");
scanf("%d%d",&a,&b);
if(a>b){
c = a+b;
printf("c: %d",c);
}
else{
c = a-b;
printf("c: %d",c);
}
return 0;
}
