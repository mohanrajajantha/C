#include<stdio.h>
int main()
{
	int a[100],i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==0)
			{
				printf("%d ",a[i]);
				printf("%d ",a[j]);
				printf("\n");
			}
		}
	}
	return 0;
}
