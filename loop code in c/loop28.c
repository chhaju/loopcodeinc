#include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
float sum=0;
int i=1;
int fact=1;
while(n!=0){
	sum=sum+(1/i);
	i++;
	n--;
	}
	printf("%f",sum);
return 0;
}
