#include <stdio.h>
#include <math.h>

int main()
{
   int n,r,t,s=0;
   scanf("%d",&n);
   t=n;
   while(n>0)
   {
       r=n%10;
       s=(s*10)+r;
       n=n/10;
   }
   if(s==t)
   printf("Yes");
   else
   printf("No");
       
   
   
    return 0;
}



