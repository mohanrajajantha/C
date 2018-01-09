

#include <stdio.h>
# define Top 3

int main()
{
    int a[100],N,i,j,temp;
    printf("Enter the number of elements:");
    scanf("%d",&N);
    printf("Enter the elements:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i< N;i++)
    {
        for(j=i+1;j< N;j++)
        {
            if(a[i]< a[j])
            {
                temp    =a[i];
                a[i]  =a[j];
                a[j]  =temp;
            }
        }
    }
    
    for( j=0;j<Top;j++)
    {
        printf("%d\n",a[j]);
    }
    
    

    return 0;
}




