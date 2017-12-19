#include<stdio.h>
#include<ctype.h>
int main (void)
{
int a,b,c;
printf(" Enter the value of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf(" %d", a);
else
if(b>c)
printf("%d",b);
else
printf("%d",c);
}
