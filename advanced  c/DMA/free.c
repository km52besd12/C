/*release dynamically allocated memoary
syntax->void free(ptr)
after free ptr also not going to erase data
double free gives core dumped error or segmentation fault
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("enter n values:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Error");
        exit(1);
    }
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
    printf("enter values are:");
        for(i=0;i<n;i++)
            printf("%d ",*(ptr+i));
    free(ptr);
    printf("\n");
    printf("after free values are:");
        for(i=0;i<n;i++)
            printf("%d ",*(ptr+i));//but last value gives correct for some time
    return 0;
}