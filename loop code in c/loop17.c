#include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int i=1;
for(int i=1;i<=n;i++){
	for(int j=1;j<=i;j++){
 	printf("*_ ");
 	}
 	printf("\n");
 	}
 return 0;
 }
