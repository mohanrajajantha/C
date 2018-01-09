#include <stdio.h>

int main()
{
    int s=0,r,n;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=(s*10)+r;
    }
    printf("%d\t",s);
    return 0;
}

