#include<stdio.h>
#include<ctype.h>
int main (void)
{
char a;
printf("Enter the character:");
scanf("%c",&a);
if(isalpha(a))
{printf(" Alphabet");}
else
{printf(" No");}
return 0;
}
