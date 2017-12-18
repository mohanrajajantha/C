#include<stdio.h>
int a=100;
int main(void)
{
int b=90;
{
int c=15;
printf(" block scope:%d",c);	
}

printf(" global variable:%d",a);
printf(" local variable:%d",b);
return 0;
}
