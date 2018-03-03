#include<stdio.h>
int armstrong(int);
int main()
{
	int n,m,i,k;
	scanf("%d%d",&n,&m);
	
	for(i=n;i<m;i++)
	{
		k=armstrong(i);
		if(k==i)
		printf("%d\n",i);
           
}
	return 0;
}
int armstrong(int l)
{int r,s=0;
	while(l>0)
	{
		r=l%10;
		l=l/10;
		s=s+(r*r*r);
	}
	return s;
}
