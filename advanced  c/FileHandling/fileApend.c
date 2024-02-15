#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[20];
    fp=NULL;
    fp=fopen("abc.txt","a");
    if(fp==NULL)
    {
        printf("Error\n");
        exit(1);
    }
    printf("enter what ever content u want to append:");
    gets(str);
   // fputs(str,fp);
   fprintf(fp,"\n%s",str);//it is better compared to fputs
    printf("Succesfully Appended\n");
    return 0;
}