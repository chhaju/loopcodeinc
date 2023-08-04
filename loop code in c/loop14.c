#include<stdio.h>
int main(){
int n,m;
printf("Enrer a rows: ");
scanf("%d",&n);
printf("Enter a colume: ");
scanf("%d",&m);
for(int i=1; i<=n; i++){
	for(int j=1; j<=m; j++){
	printf("+ ");
	}
	printf("\n");
	}
return 0;
}
