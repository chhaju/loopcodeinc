#include<stdio.h>
#include<math.h>
int main()
{
	int l,b,a;
	printf("Enter a number");
	scanf("%d%d",&l,&b);
	if(l>=b)
	{
		a=(l*b);
		printf("a: %d",a);
	}
	else
	{
		a=2*(l+b);
		printf("a: %d",a);
	}
	return 0;
}
