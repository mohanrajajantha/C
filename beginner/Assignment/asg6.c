#include<stdio.h>
#include<math.h>
int main(void)
{
int a=9,k=0,sum=0;
for(int i=0;i<4;i++)
{
sum=(a*pow(10,i))+sum;
k=k+sum;
}
printf("%d",k);
return 0;
}


