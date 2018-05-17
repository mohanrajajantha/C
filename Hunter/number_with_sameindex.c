#include<stdio.h>
int main()
{
	int x,a[100],b[100],i,k=0,j,temp,len;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	scanf("%d",&b[i]);
	for(i=0;i<x;i++)
	{
	    if(b[i]==i)
	    {
	    a[k]=b[i];
	     k++;
	     }
	}
	
	   len=k;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<len;i++)
	printf("%d ",a[i]);
	return 0;
}
