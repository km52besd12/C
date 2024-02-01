#include<stdio.h>
#include<string.h>
#include "structure.h"

void mystrUpper(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
            arr[i]-=32;
        }
        else
            continue;
    }
}
int main()
{
    int n;
    printf("How many names you want to enter:");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the name-%d:",i+1);
        scanf(" %[^\n]s",s[i].name);
    }
    printf("After Converting name small case to Capital:\n");
    for(int i=0;i<n;i++)
    {
        mystrUpper(s[i].name);
        printf("%s\n",s[i].name);
    }
}