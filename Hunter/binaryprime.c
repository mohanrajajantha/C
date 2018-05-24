#include<stdio.h>
int binary(int n)
{
    int binarynum[1000],temp,size,i=0,j,count=0;
    temp=n;
    while (n > 0) {
   binarynum[i] = n % 2;
        n = n / 2;
        i++;
    }
    size=sizeof(binarynum)/sizeof(int);
    for(j=0;j<size;j++)
    {
        if(binarynum[j]==1)
        {
            count++;
        }
        
    }
    if(count==2||count==3||count==5||count==7)
    {
        return temp;
    }
    else
    {
        return 0;
    }
}
 

int main()
{
    int x,y,l,Count=0,c;
    scanf("%d%d",&x,&y);
    for(l=x;l<=y;l++)
    {
        c=binary(l);
        if(c>0)
        Count++;
    }
    printf("%d",Count);
    return 0;
}
