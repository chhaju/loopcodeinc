#include <stdio.h>
#include <string.h>
int main(){ 
char Month[20];
printf("Enter the Month number : ");
scanf("%s", Month);
if(strcmp(Month, "1")==0){
printf("Janvary\n");
}
else if(strcmp(Month, "2")==0){
printf("February\n");
}
else if(strcmp(Month, "3")==0){
printf("March\n");
}
else if(strcmp(Month, "4")==0){
printf("Apri\nl");
}
else if(strcmp(Month, "5")==0){
printf("May\n");
}
else if(strcmp(Month, "6")==0){
printf("June\n");
}
else if(strcmp(Month, "7")==0){
printf("July\n");
}
else if(strcmp(Month,"8")==0){
printf("August\n");
}
else if(strcmp(Month,"9")==0){
printf("September\n");
}
else if(strcmp(Month, "10")==0){
printf("Octember\n");
}
else if(strcmp(Month, "11")==0){
printf("November\n");
}
else if(strcmp(Month, "12")==0){
printf("December\n");
}
return 0;
}

