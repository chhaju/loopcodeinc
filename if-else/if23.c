#include<stdio.h>
int main(){
int n,l;
printf("Enter a number");
scanf("%d",&n);
l=n%10;
if(l==3){
printf("End with 3");
}
else if(l==7){
printf("End with 7");
}
else{
printf("The number itself");
}
return 0;
}
