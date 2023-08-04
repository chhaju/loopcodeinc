#include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int sum = 0;
int ld=0;
while(n!=0){
 ld = n%10;
n = n/10;
if(ld%2!=0){
sum = sum+ld;
}
}
printf("The sum of digits are %d", sum);
return 0;
}

