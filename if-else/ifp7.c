#include<stdio.h>
int main(){
int n;
printf("Enter a number");
scanf("%d",&n);
if(n>99 && n<1000){
printf("its a tree digit number");
}
else{
printf("Not tree digit number");
}
return 0;
}
