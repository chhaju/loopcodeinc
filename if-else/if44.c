#include<stdio.h>
#include<string.h>
int main(){
char city[5];
printf("Enter a city");
scanf("%c",&city);
if(strcmp(city,"city d")==0){
printf("Red fort");
}
else if(strcmp(city, "city a")==0){
printf("Taj mahal");
}
else if(strcmp(city,"city J")==0){
printf("ram mandir");
}
else{
printf("NO");
}
return 0;
}
