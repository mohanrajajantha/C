#include <stdio.h>
#include<string.h>

int main(void) {
char s[50],temp;
int i;
scanf("%s",s);
int len=strlen(s);
for(i=0;i<len;i=i+2)
{
	if((len-i)>1)
	{
	temp=s[i+1];
	s[i+1]=s[i];
	s[i]=temp;
}
}
printf("%s",s);
	return 0;
}
