#include <stdio.h>
int main(){
int n,m;
printf("Enter n number: ");
scanf("%d",&n);
printf("Enter m number: ");
scanf("%d",&m);
int a=0;
for(int i=1; i<=n; i++){
	a=m*i;
	printf("%d\n",a);
	}
return 0;
}
