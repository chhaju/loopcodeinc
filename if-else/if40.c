#include<stdio.h>
int main(){
int n,lastdigit;
printf("Enter a number");
scanf("%d",&n);
 lastdigit= n%10;
if(lastdigit==3){
printf("End with 3");
}
if(lastdigit==7){
printf("End with 7");
}

return 0;
}
