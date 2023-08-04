#include<stdio.h>
int main(){
int age;
printf("Enter a number");
scanf("%d",&age);
if (age>=18){
printf("Eligible to voting");
}
else{
printf("Not eligible to voting");
}
return 0;
}
