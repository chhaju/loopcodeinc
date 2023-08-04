#include<stdio.h>

int main(){
int x,y,sum;
printf("Enter a number");
scanf("%d %d",&x,&y);
sum = x+y;
if (sum >=15 && sum <=20){
sum=20;
printf("sum:%d\n",sum);
}
else{
printf("0");
}
return 0;
}
