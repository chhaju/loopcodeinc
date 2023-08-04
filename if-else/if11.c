#include<stdio.h>
#include<math.h>
int main(){
int n,l;
printf("Enter a number");
scanf("%d",&n);
l=n%10;
if(l%3==0){
printf("The last digit divisible by 3");
}
else{
printf("The last digit is not divisible by 3");
}
return 0;
}


