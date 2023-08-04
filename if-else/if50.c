#include <stdio.h>
int main(){
float units,charge;
printf("enter a units");
scanf("%f",&units);
if(units>100){
if(units<=100){
charge=0;
}
else if (units<=200){
charge = (units - 100)*5;
}
else{
charge = 100*5+(units-200)*10;
}
}
printf("total electricty bill: Rs. %2f\n", charge);

return 0;
}
