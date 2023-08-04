#include<stdio.h>
int main(){
int a;
printf("enter a number");
scanf("%d",&a);
if(a%5==0 && a%11==0){
printf("5:,11: ");
}
 else if(a%5==0){
printf("5: ");
}
else if(a%11==0){
printf("11: ");
}
else{
printf("None");
}
return 0;
}
