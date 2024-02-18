#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch,str[20];
    FILE *fp=NULL;
    fp=fopen("abc.txt","a+");
    if(fp==NULL)
    {
        printf("cant open file\n");
        exit(1);
    }
    fputs(" Kishore",fp);
    rewind(fp);
    while(!feof(fp))
    {
        ch=getc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}