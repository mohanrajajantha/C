#include <stdio.h>
#include<string.h>

int main()
{
    int a[100],n,s,i,l;
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     s=a[0];
     l=a[0];
     for(i=0;i<n;i++)
     {
         if(a[i]<s)
         s=a[i];
     }
     for(i=0;i<n;i++)
     {
         if(a[i]>l)
         l=a[i];
     }
     printf("Largest element:%d\n",l);
     printf("smallest element:%d\n",s);

    
    return 0;
    
}
