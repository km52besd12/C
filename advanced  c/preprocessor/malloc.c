#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr;
    int n,i;
    printf("enter the how many integes want to enter:");
    scanf("%d",&n);
    ptr=(char*)malloc(n*sizeof(int));
    // ptr=(char*)malloc(n,sizeof(int));//calloc
    if(ptr==NULL)
    {
        printf("Insufficient memoary\n");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("enter integer-%d:",i+1);
        scanf("%d",ptr+i);
    }
    printf("after dynamic memoary allocation:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}