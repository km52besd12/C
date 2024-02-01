#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "structure.h"

int compareDates(char date1[], char date2[])
{
    return strcmp(date1,date2);
}

struct student oldestStudent(struct student arr[],int size)
{
    int oldestIndex = 0;
    for(int i=1;i<size;i++)
    {
        if(compareDates(arr[i].dob, arr[oldestIndex].dob)<0)
        {
            oldestIndex = i;
        }

    }
    return arr[oldestIndex];
}
int main()
{
    int n,i;
    struct student s;
    printf("How many students want to enter:");
    scanf("%d",&n);
    struct student *students=malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        printf("enter details for student-%d:\n",i+1);
        printf("Name: ");
        scanf("%s",students[i].name);
        printf("enter student id:");
        scanf("%d",&students[i].ID);
        printf("enter date of birth(YY-MM-DD):");
        scanf("%s",students[i].dob);
        s=oldestStudent(students,n);
     }
     s=oldestStudent(students,n);
     printf("\nOldest student: %s\nStudent ID: %d\nDOB: %s\n", s.name, s.ID, s.dob);
     free(students);
     return 0;
}
