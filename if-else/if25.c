#include<stdio.h>
int main(){
int n,num;
printf("Enter a number");
scanf("%d",&n);
if(n%4==0){
num=n+1;
printf("num: %d",num);
}
else{
num=n-1;
printf("num: %d",num);
}
return 0;
}
