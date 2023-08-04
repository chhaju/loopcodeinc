#include<stdio.h>
int main(){
int n;
printf("Enter n number: ");
scanf("%d",&n);
int sum=0;
for(int i=1; i<=n; i++){
	int m;
	printf("Enter m number: ");
	scanf("%d",&m);
	sum=sum+m;
	}
	sum=sum/n;
	printf("%d",sum);
return 0;
}
	
