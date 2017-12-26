#include<stdio.h>
#include<string.h>
int roman(char c)
{
int a;
	switch(c)
	{
		case 'I':
			a=1;
			break;
		case 'V':
			a=5;
			break;
		case 'X':
			a=10;
			break;
		default:
			a=0;
			break;
		}
		return a;
			
	}

int main(void)
{
	char s[10];
	int i,k,l,a[10],dec;
	printf("Enter the roman letter:");
	scanf("%s",s);
	l=strlen(s);
	  for(i = 0; i < l; i++)
   {
      switch (s[i])
      {
     case 'I':  a[i] = 1;
            break;
     case 'V':  a[i] = 5;
            break;
     case 'X':  a[i] = 10;
            break;
     case 'L':  a[i] = 50;
            break;
     case 'C':  a[i] = 100;
            break;
     case 'D':  dec = dec + 500;
            break;
     case 'M':  a[i] = 1000;
            break;
     default :  printf("Invalid choice");
            break;
      }
   }
	k=a[l-1];
	for(i=l-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		{
			k=k-(a[i-1]);
		}
		else
		{
			k=k+(a[i-1]);
		}
	}
	printf("%d",k);
	return 0;
	
}
