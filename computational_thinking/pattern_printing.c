#include <stdio.h>

int main()
{
    int i,j,k,n=5,m;
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
        printf(" ");
        for(k=i;k>=1;k--)
        printf("%d",k);
        for(m=2;m<=i;m++)
        printf("%d",m);
         printf("\n");
        
    }
   
    return 0;
    
}
