#include <stdio.h>
int main(){
int n;
printf("Enter a number");
scanf("%d",&n);
int i=1;
int sum=0;
int b;
printf("Enter a numbert");
scanf("%d", &b);
while(n<=i){
i++;
sum = sum+b;
}
printf("%d", sum);
return 0;
}
