#include<stdio.h>
int main()
{
	int a[100],i,j,count=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count>=2)
		{
			printf("%d",a[i]);
			break;
		}
	}
	
	return 0;
}
