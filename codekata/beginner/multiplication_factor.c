#include <stdio.h>
#include <math.h>

int main()
{
   int n,s=1;
   scanf("%d",&n);
   for(int i=1;i<=5;i++)
   {
       s=i*n;
       printf("%d ",s);
   }

    return 0;
}

