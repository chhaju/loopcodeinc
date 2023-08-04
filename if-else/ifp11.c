#include <stdio.h>
int main(){
int a,b,c;
printf("Enter a number");
scanf("%d",&a);
printf("Enter a number");
scanf("%d",&b);
printf("Enter a number");
scanf("%d",&c);
if((a+b)>c && (b+c)>a && (c+a)>b){
printf("valide trangel");
}
else{
printf("Invalide Trangel");
}
return 0;
}
