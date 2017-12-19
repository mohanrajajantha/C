
#include<stdio.h>
int max( int k[]);
int main( void){
	int i,k[100],m,x;
    printf("Enter the number of elements:");
    scanf("%d",&x);
    printf("Enter the elemets:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&k[i]);
	}
	m=max(k);
	printf(" The largest element is:%d\n",m);
	return 0;
}
int max ( int k[])
{
	int n,i;
	n=k[0];
	for(i=0;i<5;i++)
	if(n<k[i])
	n=k[i];
	return n;
	
}
