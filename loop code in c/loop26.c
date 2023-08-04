#include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int i=1;
int d=0;
int r=0;
while(n!=0){
	r=n%10;
	d+=r*i;
	i=i*2;
	n=n/10;
	}
	printf("%d",d);
return 0;
}
