#include <stdio.h>
int main(){
int n;
printf("Enter a number");
scanf("%d", &n);
if(n>100 && n<999){
printf("Three digit number");
}
else{
printf("Not three digit number");
}
return 0;
}
