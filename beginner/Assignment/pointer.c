#include<stdio.h>
#include<string.h>
int main(void)
{
char *s={"hello"};
int n,i;
n=strlen(s);

for(i=n;i>=0;i--)
{
printf("%c",s[i]);
}
return 0;
}
