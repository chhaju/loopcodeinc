 #include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int nst=n;
int nsp=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=nst;j++){
		 }
		for(int k=1;k<=nsp;k++){
		printf(" ");
		}
		for(int j=1;j<=nst;j++){
		printf("*");
		}
		nst--;
		nsp++;
		printf("\n");
	}
	
return 0;
}
