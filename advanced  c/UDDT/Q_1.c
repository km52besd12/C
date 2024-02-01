#include<stdio.h>
#include<string.h>
#include "structure.h"
void printstudentdata(struct student s)
{
     printf("\nID:%d\nname:%s\ndate of birth:%d-%d-%d\npercentage:%f\n",s.ID,s.name,s.d,s.m,s.y,s.per);
}
void percentage(struct student *ptr)
{
    int i;
    ptr->per=0;
    for(i=0;i<6;i++)
    {
       ptr->per += ptr->marks[i];
    }
     ptr->per /= 6;
}
int main()
{
    struct student s;
    printf("enter the ID No:");
    scanf("%d",&s.ID);
    printf("enter the name:");
    scanf("%s",s.name);
    for(int i=0;i<6;i++)
    {
        printf("enter the subject-%d:",i+1);
        scanf("%d",&s.marks[i]);
    }
    printf("enter the date of birth(dd-mm-yy):");
    scanf("%d-%d-%d",&s.d,&s.m,&s.y);
    percentage(&s);
    printf("enter the Gender(m or f):");
    scanf(" %c",&s.gender);
    for(int i=0;i<6;i++)
    {
        printf("subject-%d:",i+1);
        printf("%d\n",s.marks[i]);
    }
    printstudentdata(s);
    if(s.gender=='m'||s.gender=='M')
    {
        printf("Male\n");
    }
    else if(s.gender=='f'||s.gender=='F')
    {
        printf("Female\n");
    }
    else 
    {
        printf("Invalid gender\n");
    }
    return 0;
}