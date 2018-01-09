#include <stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i,j,c=0;
    scanf("%s",a);
    
    for(i=0;i<strlen(a);i++)
    {
        for(j=i+1;j<strlen(a);j++)
        {
            if(a[i]==a[j])
            c++;
        }
    }
    if(c>0)
    {
        printf("string doesn't have unique characters");
    }
    else
    {
        printf(" string has unique characters");
    }
   
    return 0;
    
}
