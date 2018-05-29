#include<stdio.h>
int main()
{
    int n,flag;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==0)
        {
        flag=1;
        }
        else
        {
            flag=0;
        }
        n=n/2;
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
