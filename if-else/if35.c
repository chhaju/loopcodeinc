#include<stdio.h>
int main(){
int day,month,year;
printf("Enter a number");
scanf("%d%d%d",&day,&month,&year);
if(year>0){
if(day<=31){
if(month<=12){
printf("all are valide");
}
else{
printf("invalide");
}
}
else{
printf("invalide");
}
}
else{
printf("invalide");
}
return 0;
}
