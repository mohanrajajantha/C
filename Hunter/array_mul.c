#include<stdio.h>
int main()
{
    int a[100],i,j,n,o[100],f=1,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        f=f*a[j];
    }
    o[i]=f/a[i];
    f=1;
    }
    
 for(i=0;i<n;i++)
    printf("%d ",o[i]);
    return 0;
}
