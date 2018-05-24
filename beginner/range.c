#include<stdio.h>
int main()
{
    int x,y,n,i,flag=0;
    scanf("%d%d",&x,&y);
    scanf("%d",&n);
    for(i=x;i<=y;i++)
    {
        if(i==n)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
