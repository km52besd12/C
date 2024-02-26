#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch=1;
    int *ptr;
    while(ch<50)
    {
        printf("memory leak Demo\n");
        ptr=(int*)malloc(5000*sizeof(int));//allocating memory for  5000 integers in a block of
        printf("continue ?? press 1");
        scanf("%d",&ch);
        free(ptr); //freeing the allocated
        /*open Task manger before run in terminal gcc memoryleak.c  and .\a.exe
        then open Task manager and search for a.exe and enter 1 1 1 1 and observe in  task manager increasing memory
        while remove comment free(ptr)  and contine same process and observe the memoary no change*/
    }
}