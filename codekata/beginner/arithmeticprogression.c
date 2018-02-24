#include<stdio.h>
int a,d,n,i;
int main()
{
	int s=0,m;
	scanf("%d%d%d",&n,&a,&d);
	for(i=0;i<n;i++)
	{
	
		s=s+a;
		a=a+d;
	}
	printf("%d\n",s);
}
