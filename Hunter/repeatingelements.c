#include<stdio.h>
int main()
{
	int i,j,n,a[100],flag=0,k=0,b[100],len,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if((a[i]==a[j])&&(a[i]!='+'))
		{
			flag=1;
			a[j]='+';
			
			b[k]=a[i];
			k++;
			//printf("%d",a[i]);
		}
	}

	
}
if(k==0)
printf("Unique");
else
{

len=k+1;
for(i=0;i<len;i++)
{
	for(j=i+1;j<len;j++)
	{
		if(b[i]>b[j])
		{
			temp=b[j];
			b[j]=b[i];
			b[i]=temp;
		}
	}
}
for(i=0;i<len;i++)
printf("%d",b[i]);
}
return 0;

}
