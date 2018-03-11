#include <stdio.h>
#include<string.h>

int main()
{
    char s[100],a[100];
    scanf("%s",s);
   int k=strlen(s);
   for(int i=k;i>=0;i--)
   {
       printf("%c",s[i]);
   }
    return 0;
}
