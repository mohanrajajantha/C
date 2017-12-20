#include <stdio.h>
#include<string.h>

int main(void) {
	char *a,x;
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i=i+2)
	{
		if(a[i+1]!='\0')
		{
		x=a[i];
		a[i]=a[i+1];
		a[i+1]=x;
		}
		else 
		break;
		
	}
	printf("%s\n",a);
	return 0;
}
