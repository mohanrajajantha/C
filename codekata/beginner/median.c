#include<stdio.h>
int main()
{
	int a[100000],n,min,i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
if(n%2==0)
{
	n=(n/2)-1;
}
else
n=n/2;
printf("%d",a[n]);

}
