#include<stdio.h>

int main()
{
    char s[1000],t[100],i,j,l;
    scanf("%s%s",s,t);
    for(i=0;s[i]!='\0';i++);
        for(j=0;t[j]!='\0';j++,i++)
        {
            s[i]=t[j];
        }
        s[i]='\0';
    printf("%s",s);
   
    return 0;
    
}
