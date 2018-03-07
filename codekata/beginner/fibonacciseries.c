#include<stdio.h>
int main()
{
	int n,i,a=0,b=1,s=0;
	scanf("%d",&n);
	printf("%d ",b);
	for(i=0;i<(n-1);i++)
	{
		s=a+b;
		a=b;
		b=s;
		printf("%d ",s);
	}
}
