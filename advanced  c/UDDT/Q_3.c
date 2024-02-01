#include<stdio.h>
#include<string.h>
#include "structure.h"
int mystrucmp(struct student s,struct student s1)
{
    if(s.ID!=s1.ID)
        return 0;
    if(strcmp(s.name,s1.name)!=0)
        return 0;
    for(int i=0;i<6;i++)
    {
        if(s.marks[i]!=s1.marks[i])
            return 0;
    }
    if(s.d!=s1.d || s.m!=s1.m || s.y!=s1.y)
        return 0;
    if(s.gender!=s1.gender)
        return 0;
    return 1;
}
int main()
{
    int a;
    struct student s,s1;
    printf("enter the (s)ID No:");
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
    printf("enter the Gender(m or f):");
    scanf(" %c",&s.gender);
    printf("enter the (s1)ID No:");
    scanf("%d",&s1.ID);
    printf("enter the name:");
    scanf("%s",s1.name);
    for(int i=0;i<6;i++)
    {
        printf("enter the subject-%d:",i+1);
        scanf("%d",&s1.marks[i]);
    }
    printf("enter the date of birth(dd-mm-yy):");
    scanf("%d-%d-%d",&s1.d,&s1.m,&s1.y);
    printf("enter the Gender(m or f):");
    scanf(" %c",&s1.gender);
    a=mystrucmp(s,s1);
    if(a==1)
    {
        printf("Two structures are equal=%d\n",a);
    }
    else
        printf("Two structures are not equal=%d\n",a);
    return 0;
}