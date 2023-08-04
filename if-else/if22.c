#include<stdio.h>
int main(){
float a,b,p;
printf("Enter a number");
scanf("%f%f",&a,&b);
p=b/a*100;
if(p>=75){
printf("Allowed to sit in the exam");
}
else{
printf("Not allowed to sit in the exam");
}
return 0;
}
