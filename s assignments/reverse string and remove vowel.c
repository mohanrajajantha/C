#include <stdio.h>
#include <string.h>
 
int vowel(char);
 
int main()
{
  char s[100], d[100];
  int i,n, j = 0;
 
  printf("Enter a string \n");
  scanf("%s",s);
  n=strlen(s);
  for(i=n-1;i>=0;i--)
    {
      printf("%c",s[i]);
    }
 
  for(i = 0; s[i] != '\0'; i++) {
    if(vowel(s[i]) == 0) {      
      d[j] = s[i];
      j++;
    }
  }
 
  d[j] = '\0';
 
  strcpy(s, d);    
 
  printf(" %s\n", s);
 
  return 0;
}
 
 
int vowel(char c)
{
  switch(c) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      return 1;
    default:
      return 0;
  }
}
