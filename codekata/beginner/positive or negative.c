#include<stdio.h>
#include<ctype.h>

int main(void){
int n;
printf("Enter the value:");
scanf("%d",&n);
  if(1<=n && n<=1000||n==0||n<0)
  
  {
  
if(n>0)
printf(" Positive");
else
if(n<0)
printf("Negative");
else
printf("Zero");
     }
     else
     printf("invalid");
     return 0;
}
