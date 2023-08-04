#include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int r=0;
int t=n;
while(t>0){
	int digit=t%10;
	r=r*10+digit;
	t=t/10;}
	if(n==r){
	printf("palindrame number");
	}
	else{
	printf("Not palindrame number");
	}
return 0;
}
