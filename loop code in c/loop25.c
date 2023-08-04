#include <stdio.h>
#include <math.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int sum=0;
int temp=n;
int digit=0;
while(temp>0){
	digit= temp%10;
	sum+= pow(digit,3);
	temp=temp/10;
	}
	if(n==sum){
	printf("Armstrong number ");
	}
	else{
	printf("Not Armstrong number ");
	}
return 0;
}
