#include<stdio.h>
int main(){
int day,amt;
printf("Enter a day: ");
scanf("%d",&day);
if(day<=5){
amt= (day*2);
}
else if(day>=6 && day<=10){
amt= (day*3);
}
else if(day>=11 && day<=15){
amt= (day*4);
}
else{
amt = (day*5);
}
printf(" library charge: %d\n", amt);

return 0;

}
