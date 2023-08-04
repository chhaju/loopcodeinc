#include<stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int sum=0;
for(int i=1; i<n; i++)
{
	if(n%i==0)
	{
		sum=sum+i;
	}
}
if(sum==n)
{
	printf("PERFECT NUMBER\n");
}
else{
printf("NOT PERFECT");

}
return 0;
}
