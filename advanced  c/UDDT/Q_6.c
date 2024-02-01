#include<stdio.h>
#include<stdlib.h>
#include "structure.h"

int main()
{
    int n,c=0,k=0;
    printf("enter the strength of class:");
    scanf("%d",&n);
    struct student s;
    struct student *students=malloc(n*sizeof(struct student));
    if(students==NULL)
    {
        printf("Insufficent memoary\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        printf("enter the name of student-%d:",i+1);
        scanf("%s",students[i].name);
        printf("enter the Gender(m or f):");
        scanf(" %c",&students[i].gender);
        if (students[i].gender!='m'&&students[i].gender!='M'&&students[i].gender!='f'&&students[i].gender!='F')
        {
            printf("Invalid Input\n");
            return 0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(students[i].gender=='m'||students[i].gender=='M')
            c++;
        if(students[i].gender=='f'||students[i].gender=='F')
            k++;
    }
    printf("Number of boys in Class=%d\nNumber of Girls in Class=%d",c,k);
    free(students);
    return 0;

}