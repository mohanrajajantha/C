#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],stack[100];
	int len,top=-1,i;
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		top++;
		stack[top]=s[i];
	}
	for(i=0;i<len;i++)
	{
		if(stack[top]!=s[i])
		break;
		top--;
	}
	if(i==len)
	printf("Yes");
	else
	printf("No");
	return 0;
}
