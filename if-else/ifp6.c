#include<stdio.h>
int main(){
int l;
printf("Enter a number:");
scanf("%d",&l);
int b;
printf("Enter a number:");
scanf("%d",&b);
int a= l*b;
int c=2*(l+b);
if (a>c) {
printf("area is ghreater than parameter");
}
else{
printf("area is not ghreater than parameter");
}
return 0;
}

