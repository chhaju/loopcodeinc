#include<stdio.h>
int main(){
int a,b,c;
printf("Enter a number");
scanf("%d%d",&a,&b);
if (a>b){
printf("atb");
}
else{
a-=b;
printf("a: %d\n", a);
}
return 0;
}
