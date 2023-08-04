#include <stdio.h>
int main(){
int n,m;
printf("Enter n number: ");
scanf("%d",&n);
printf("Enter m number: ");
scanf("%d",&m);
int sum=0;

for(int i=1; i<=n; i++){
int p=1;
	for(int j=1; j<=m; j++){
	p=p*i;
	sum=sum+p;
	}

printf("%d\n",sum);
}
return 0;
}
