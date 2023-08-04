#include<stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int pro=1;
int i=1;
while( i<=n){
int a;
printf("Enter valuv of a: ");
scanf("%d",&a);
pro=(pro*a);
n=n-i;
}
printf("%d",pro);

 return 0;
 }

