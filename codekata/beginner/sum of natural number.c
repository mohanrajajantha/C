#include<stdio.h>
int main (void)
{
int i,n,s=0;
printf("Enter the value:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
s=s+i;
}
printf(" %d",s);
}
