#include<stdio.h>
int main()
{
    int x,n,count=0;
    scanf("%d",&x);
    while(x>0)
    {
        x=x/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
