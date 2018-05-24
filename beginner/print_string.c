#include<stdio.h>
int main()
{
    char str[100];
    int n,i;
    scanf("%s",str);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%s",str);
        printf("\n");
    }
    return 0;
}
