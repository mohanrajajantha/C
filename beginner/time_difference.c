#include<stdio.h>
int main()
{
    int t1,m1,t2,m2,s,t,m;
    scanf("%d%d%d%d",&t1,&m1,&t2,&m2);
    s=((t2*60)+m2)-((t1*60)+m1);
    t=s/60;
    m=s%60;
    printf("%d %d",t,m);
    return 0;
}
    
