#include <stdio.h>
#include<string.h>
typedef struct room
{
    int no;
    char name[30];
    char entrydate[12];   // (dd/mm/yyyy)
    int num_occupants;
    char status[3];
}r1;

int main()
{
     r1 r[5];
    printf("Enter the room no,name,status:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d%s%s%d%s",&r[i].no,r[i].name,r[i].entrydate,&r[i].num_occupants,r[i].status);
    }
    printf(" Vacant room details\n");
    for(int i=0;i<5;i++)
    {
        if(!strcmp(r[i].status,"no"))
        {
            printf("%d\n",r[i].no);
        }
    }
    

    return 0;
}
