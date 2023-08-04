#include<stdio.h>
int main(){
int n;
printf("Enter a number");
scanf("%d",&n);
if(n<9){
printf("singal digit");
}
else if(n<99){
printf("Two digit");
}
else if(n<999){
printf("Three digit");
}
else  {
printf("More than three digits");
}
return 0;
}

