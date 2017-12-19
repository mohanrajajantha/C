#include<stdio.h>
int main(void)
{
int a[6],b[6],i,j,n,x,l;
printf("Enter the number of elements in first array:");
scanf("%d",&x);
printf("Enter the elements of first array:");
for(i=0;i<x;i++)
scanf("%d",&a[i]);
printf("Enter the number of elements in second array:");
scanf("%d",&n);
printf("Enter the elements of second array:");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
j=x+n;
for(i=x,l=0;i<j,l<n;i++,l++)
{
a[i]=b[l];
}
for(i=0;i<j;i++)
{
printf("%d\n",a[i]);
}
}
