#include<stdio.h>
#include<ctype.h>
int main (void)
{
int n;
printf("Enter the value:");
scanf("%d",&n);
  if(isdigit(n))
  {
  if(n>=1&&n<=10000)
  {
if(n%2==0)
printf(" Even");
else
printf("ODD");
  }
  }  else
    printf("Invalid");
  return 0;
}
