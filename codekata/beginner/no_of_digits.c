#include <stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    if(n<0)
    n=(-n);
   
        while(n>0)
        {
            n=n/10;
            count++;
        }
    
        if(count)
        printf("%d",count);
    else
        printf("invalid");
    return 0;
}
