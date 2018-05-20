#include<stdio.h>
int main(void)
{
    int a[100],b[100],c[100],d[100],i,j,k,l,n,p=0,sum,size;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            for(l=0;l<n;l++)
            {
                if(sum==a[l])
                {
                    b[p]=a[i];
                    c[p]=a[j];
                    d[p]=sum;
                    printf("%d %d %d",b[p],c[p],d[p]);
                    printf("\n");
                    p++;
                }
            }
            
        }
    }
    return 0;
    
}
