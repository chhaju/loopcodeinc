#include <stdio.h>
int main(){
int m,n;
printf("Enter a number M: ");
scanf("%d",&m);
printf("Enter a number N: ");
scanf("%d",&n);
int i=m;
int sum=0
while(m%2==0){
	if(i<n){
		sum+=i;
		i=m+2;
		}
		else{
		printf("%d even number",sum);
		m++;
		}
		}
return 0;
}
