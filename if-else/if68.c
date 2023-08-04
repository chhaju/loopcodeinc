#include<stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int t=0;
int s=0;
for(int i=1; i<=n; i++){
	t=(t*10)+1;
	s=s+t;
	}
	printf("%d\n",s);
return 0;
}
