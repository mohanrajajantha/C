#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char s[100];
	int i,len,count=0;
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(isdigit(s[i]))
		count++;
		
	}
	if(count==len)
	printf("Yes");
	else
	printf("No");
	return 0;
}
