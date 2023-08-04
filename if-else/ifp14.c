#include <stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
if(a==0 && b==0){
printf("The point is oringin");
}
else if(a==0){
printf("Lies on a-axis");
}
else if(b==0){
printf("Lies on b-axis");
}
else{
printf("The point does not lie on a or b axis");
}
return 0;
}
