#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[20];
    fp=fopen("abc.txt","r+");
    if(fp==NULL)
    {
        printf("Error\n");
        exit(1);
    }
    fputc('M',fp);
    fputs("URALI",fp);//append after one charcter in abc.txt  file
    fputs("KRISHNA",fp);
    fclose(fp);
    return 0;
}