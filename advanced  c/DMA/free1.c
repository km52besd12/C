/*declaring ptr in global may cause issues
like  this:
scope
Encapsulation
Concurrency
Memory Management
this all kind of issues we face never declare global pointer
*/ 
#include<stdio.h>
#include<stdlib.h>
int n;
int *Display(void)
{
    int i,*ptr;;
    printf("enter n values:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
    return ptr;
}
int main()
{
    int *ptr1,i;
    ptr1=Display();
    //we can access the values because dynamically allocated memoray, it can't be free by automatically
    if(ptr1==NULL)
    {
        printf("Error");

        exit(1);
    }
    printf("enter values are:");
        for(i=0;i<n;i++)
            printf("%d ",*(ptr1+i));
    free(ptr1);
    return 0;
}