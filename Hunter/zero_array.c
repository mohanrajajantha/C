#include<stdio.h>
int main() {
   int a[100][100],n,m,i,j,k,l;
   scanf("%d%d",&n,&m);
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(a[i][j]==0)
           {
               k=i;
               l=j;
               for(i=0;i<n;i++)
                {
                for(j=0;j<m;j++)
                {
                    if(i==k || j==l)
                    {
                        a[i][j]=0;
                    }
                }
                }
           }
       }
   }
   
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
}
