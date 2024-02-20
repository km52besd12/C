#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch,str[20];
    FILE *fp=NULL;
    fp=fopen("abc.txt","r+");
    if(fp==NULL)
    {
        printf("error\n");
        exit(1);
    }
    fseek(fp,3,SEEK_SET);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    rewind(fp);//rewind is simple key word to move file pointer to initial position of file
     while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}