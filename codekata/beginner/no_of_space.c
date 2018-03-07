#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char s[100000];
	int i,count=0;
	gets(s);
	int k=strlen(s);
	for(i=0;i<k;i++)
	{
		if(s[i]==' ')
		count++;
		
	}
	printf("%d",count);
}
