#include <stdio.h>
int main(){
int a,b;
printf("inter a number");
scanf("%d",&a);
if(a%5==0){
if(a%3==0){
printf("number is divisible by 5 and 3");
}
else{
printf("number is not divisible");
}
}
else{
printf("number not diviseble");
}
return 0;
}
