#include<stdio.h>
int main()
{
	int min,hr;
	scanf("%d",&min);
	
	hr=min/60;
	min=min%60;
	printf("%d:%d",hr,min);
	return 0;
}
