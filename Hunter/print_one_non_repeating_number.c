#include<stdio.h>
int main()
{
    int x,a[100],i,j,c=0;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    for(i=0;i<x;i++)
    {
        c=0;
        for(j=0;j<x;j++)
        {
            if(a[i]==a[j])
            c++;
        }
       if(c==1)
       printf("%d",a[i]);
    }
    return 0;
    }
