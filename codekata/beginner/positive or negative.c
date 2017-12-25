#include<stdio.h>
#include<ctype.h>

int main(void){
int n;
printf("Enter the value:");
scanf("%d",&n);
  if(isnumeric(n)
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
