#include<stdio.h>
int main(){
int a;
printf("Enter a number");
scanf("%d",&a);
if( a%5==0 || a%3==0 ){
if(a%15!=0){
printf("The number is divisible by 5 and 3 not 15");
}
else{
printf("divisible by 15");
}
}
else{
printf("the number is not divisibal by 3 and 5");
}
return 0;
}

