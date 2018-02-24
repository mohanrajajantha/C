#include<stdio.h>
int main()
{
	int n,r,k,s=0;
	scanf("%d",&n);
	k=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		s=s+(r*r*r);
	}
	if(s==k)
{
		printf("Yes");
	}
	else
	{
	
	printf("No");
}
	return 0;
}
