#include<stdio.h>
int main(){
int n;
printf("Enter a number");
scanf("%d",&n);
if(n>0){
printf("N is positive number");
 }
else{
if(n<0){
printf("N is negative number");
}
else{
printf("N is zero");
}
}

return 0;
}
