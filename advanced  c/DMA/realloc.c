/*syntax-> void* realloc(void *ptr, size_t size)
it will never lose old data,if new size  is larger than the old one if not enough space in  old block 
it will copy that content into new block in heap section and returns new adress to the pointer.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("enter the n value:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("error");
        exit(1);
    }
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
    printf("enter updated n:");
    scanf("%d",&n);
    int *ptr1=(int*)realloc(ptr,n*sizeof(int));
    //instead of ptr we put NULL,it will allocate as same malloc
    //instead of size we put NULL,it  will same as free ptr
    printf("previous address=%d new address=%d\n",ptr,ptr1);
    printf("values are:");
    for(i=0;i<n;i++)
        printf("%d ",*(ptr1+i));
    free(ptr1);
    return 0;
}