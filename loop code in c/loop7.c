#include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int sum=0;
for(int i=1; i<=n; i++){
sum = sum + i;
printf("%d", sum);
}

printf("\n");

return 0;
}
