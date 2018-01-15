#include <stdio.h>
#include <math.h>

int main()
{
   int n,m,i;
   scanf("%d%d",&n,&m);
   if(m<0)
   printf("invaid");
   else
  if(m==0)
  printf("1");
  else
   if(m>1)
  { n=pow(n,m);
   printf("%d",n);
  }
    return 0;
}
