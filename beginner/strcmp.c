#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t[100];
    int sum1=0,sum2=0,len1,len2,i;
    scanf("%s%s",s,t);
    len1=strlen(s);
    len2=strlen(t);
    {
        for(i=0;i<len1;i++)
        {
            sum1=sum1+s[i];
        }
        for(i=0;i<len2;i++)
        {
            sum2=sum2+t[i];
        }
        if(sum1==sum2)
        {
             printf("%s%s",s,t);
        }
        else
        if(sum1>sum2)
        {
            printf("%s",s);
        }
        else
        {
            printf("%s",t);
        }
        
    }
 
return 0;
}
