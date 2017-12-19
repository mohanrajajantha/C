#include<stdio.h>
int main (void)
{
char a;
printf("Enter the character:");
scanf("%c",&a);
if(a=='a'||a=='A'||a=='e'||a=='E'||a=='o'||a=='O'||a=='i'||a=='I'||a=='u'||a=='U')
{printf(" Vowel");}
else
{printf(" consonant");}
return 0;
}
