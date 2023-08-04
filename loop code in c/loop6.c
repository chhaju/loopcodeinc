#include <stdio.h>

int main(){
int n;
printf("Enter a n valuve");
scanf("%d",&n);
for(int i=1; i<=n; i++){
     for( int j=1; j<=i; j++){
     printf("*_ ");
     }
      printf("\n");
     }
return 0;
}
