#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char s[100000];
	int i,count=0,spl;
	gets(s);
	int k=strlen(s);
	for(i=0;i<k;i++)
	{
		if(isdigit(s[i]))
		count++;
		
	}
	
	printf("%d",count);
}
