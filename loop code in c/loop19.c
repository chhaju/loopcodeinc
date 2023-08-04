#include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int pro=1;
int i=1;
while( i<=n){
	pro=pro*n;
	n--;
	}
	printf("%d",pro);
return 0;
}
	
