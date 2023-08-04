#include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int pro=1;
while(n>0){
	pro=pro*(n%10);
	n=n/10;
	}
	printf("%d",pro);
	return 0;
	}
