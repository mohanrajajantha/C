	#include<stdio.h>    
    #include<stdlib.h>  
	#include<ctype.h>
    int main(void){  
    char s[100];
    int a[10],n,i;   
    scanf("%s",s);    
    n=atoi(s);
      if(isdigit(n))
      {
    for(i=0;n>0;i++)    
    {    
    a[i]=n%2;    
    n=n/2;    
    }    
    for(i=i-1;i>=0;i--)    
    {    
    printf("%d",a[i]);    
    } 
      }
      else
      {
        printf(" Error ");
      }
    return 0;  
    }  
