/*#include <stdio.h>
int main(){
int a=10;
do{
printf("Value of a: %d\n");
a=a+1;
}
while(a=20);

return 0;
}*/
/* #include<stdio.h>
 int main(){
 int n;
 printf("Enter the value of n : ");
 scanf("%d",&n);
 int i=1;
 int s=0;
 while(i<n){
 if(n%i==0){
 s=s+i;
 }
 i++;
 }
 
 if(s==n){
printf("perfect number\n");
}
else{
printf("Not perfect number\n");
}
 return 0;
 }*/
/* #include <stdio.h>
 int main(){
 int n;
 printf("enter the valuo of n-:");
 scanf("%d",&n);
 int i=1;
 while(i<=n)
 {
      int j=1;
       while(j<=i)
       {
           printf("* ");
           j++;
        }
        printf("\n");
        i++;
   }
   return 0;
}*/


#include<stdio.h>
int main(){
int n;
printf("Enter the value of n-:");
scanf("%d",&n);
for(int i=1; i<=n; int j=1; j<=i ){
printf("* ");
j++;
}
printf("\n");
i++;
return 0;
}
