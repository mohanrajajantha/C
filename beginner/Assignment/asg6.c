#include<stdio.h>
#include<math.h>
int main(void)
{
int a=9,k=0,sum=0;
for(int i=1;i<=4;i++)
{
sum=pow(a,i);
k=k+sum;
}
printf("%d",k);
return 0;
}
