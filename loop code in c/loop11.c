#include<stdio.h>
int main(){
int n;
printf("loop stop valuve: ");
scanf("%d",&n);
int sum = 0;
for(int i=1;i<=n;i++){
int a;
printf("Enter a number: ");
scanf("%d",&a);
sum=sum+a;
}
printf("%d", sum);
return 0;
}
