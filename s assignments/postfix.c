#include<stdio.h>
#include<string.h>
int size=100;
int i,c,top=-1,no;
char output[50],input[50],a[100];
int pre(char ch)
{
	int value;
	switch(ch)
	{
		case '+':
			value=1;
			break;
		case '-':
			value=1;
			break;
		case '*':
			value=2;
			break;
		case '/':
			value=2;
			break;
		default:
			value=5;
			break;
	}
	return 0;
}
void push(char ch)
{
	top++;
	a[top]=ch;
}
char pop()
{
	char k;
	k=a[top];
	top--;
	return k;
}
int main(void)
{
	char m;
	int j=0;
	printf("Enter the expression:\n");
	scanf("%s",input);
	for(i=0;i<strlen(input);i++)
	{
		if(input[i]!='+'&&input[i]!='-'&&input[i]!='*'&&'/')
		{
			output[j]=input[i];
			j++;
		}
		else
		{
			m=pop();
			if(pre(m)==5)
			{
				push(input[i]);
			}
		else
			if(pre(m)<pre(input[i]))
			{
				push(m);
				push(input[i]);
			}
		else
			{
				output[j]=m;
				j++;
				push(input[i]);
			}
		}
	}
	while(m=pop())
	{
		output[j]=m;
		j++;
	}
	printf("%s",output);
	return 0;
}
