#include <stdio.h>
int main(){
int a,b,c;
printf("Enter a numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b){
   if(a>c){
       printf("max number a: %d ",a );
       }
       else{
       printf("max number c: %d", c );
       }
}
else if(b>c){
printf("max number b: %d", b );
}
else {
printf("max number c: %d", c );
}
return 0;
}
