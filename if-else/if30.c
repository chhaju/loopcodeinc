#include <stdio.h>
int main(){
int p,c,b,m,a,sum,d;
printf("Enter a number");
scanf("%d%d%d%d%d",&p,&c,&b,&m,&a);
sum=p+c+b+m+a;
d=(sum/500)*100;
if(p>=90){
printf("Grade A");
}
else if(p>=80){
printf("Grade B");
}
else if(p>=70){
printf("Grade C");
}
else if(p>=60){
printf("Grade D");
}
else if(p>=50){
printf("Grade E");
}
else if(p>=40){
printf("Grade F");
}
else{
printf("faill");
}
return 0;
}
