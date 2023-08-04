#include <stdio.h>
int main(){
int n;
printf("Enter a number");
scanf("%d",&n);
float a=100;
for(int i=1; n>0; i++){
printf("%.2f\n", a);
a/=2.0;
}
return 0;
}
