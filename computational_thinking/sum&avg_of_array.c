#include <stdio.h>
#include<string.h>

int main()
{
    int a[100],n,i,s=0;
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%d %d",s,(s/n));
    return 0;
    
}
