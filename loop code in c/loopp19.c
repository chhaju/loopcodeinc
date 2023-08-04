#include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int sum = 0;
int ld=0;
int r =0;
while(n!=0){
 ld = n%10;
sum = sum+ld;
n = n/10;
}
printf("The sum number %d\n", sum);

while (sum!=0){
r = r*10;
r = r + (sum%10);
sum = sum/10;
}
printf("The reversed of sum %d\n", r);

return 0;
}

