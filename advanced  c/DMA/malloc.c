#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("enter the  number of elements you want to enter:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Error\n");
        exit(1);
    }
    printf("enter the values:");
    for(i=0;i<n;i++)//if scanned less than n ,in out put get garbage value un scanned value
    {
        scanf("%d",(ptr+i));
    }
    printf("enter values:");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}