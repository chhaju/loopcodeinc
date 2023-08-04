#include <stdio.h>
int main(){
int n;
printf("Enter the value of n-:");
scanf("%d",&n);
int i=n;
while (i>0){
int j =1;
while(j<=i){
printf("* ");
j++;
}
printf("\n");
i--;
}
return 0;
}
