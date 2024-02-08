#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("how many integer want to enter:");
    scanf("%d",&n);
    char *ptr;
    int *ptr1;
   // ptr=(char*)malloc(n*sizeof(int));
   ptr=(char*)calloc(n,sizeof(int));
     if(ptr==NULL)
     {
        printf("Insufficent\n");
        exit(1);
     }
      ptr1=(int*)ptr;
     for(i=0;i<n-1;i++)
     {
        printf("enter integer-%d:",i+1);
        scanf("%d",ptr1+i);
     }
     printf("after dynamic allocation:");
     for(i=0;i<n;i++)
     {
        printf("%d\t",*(ptr1+i));
     }
     free(ptr1);
     return 0;
}