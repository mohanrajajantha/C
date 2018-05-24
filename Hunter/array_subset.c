#include <stdio.h>

int main() 
{
int a[100],b[100],i,n,n1,j,flag=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
scanf("%d",&n1);
for(j=0;j<n1;j++)
{
	scanf("%d",&b[j]);
}
for(i=0;i<n;i++)
{
	for(j=0;j<n1;j++)
	{
		if(a[i]==b[j])
		{
			flag=1;
			break;
		}
	}
}
if(flag==1)
{
	printf("Yes");
}
else
{
	printf("No");
}
return 0;
}
