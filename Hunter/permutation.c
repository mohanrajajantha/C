#include<stdio.h>
#include<string.h>

void swap(char *x,char *y)
{
	char temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void stringPermutation(char *s,int initial,int final)
{
	int i;
	if(initial==final)
	{
		printf("%s\n",s);
	}
	else
	{
		for(i=initial;i<=final;i++)
		{
			swap((s+initial),(s+i));
			stringPermutation(s,initial+1,final);
			swap((s+initial),(s+i));
		}
	}
}
int main()
{
	char string[1000];
	int length;
	scanf("%s",string);
	length=strlen(string);
	stringPermutation(string,0,length-1);
	return 0;
}
